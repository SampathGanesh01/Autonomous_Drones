#include <gnc_functions.hpp>
//include API 

int main(int argc, char** argv)
{
	//initialize ros 
	ros::init(argc, argv, "gnc_node");
	ros::NodeHandle gnc_node("~");
	
	//initialize control publisher/subscribers
	init_publisher_subscriber(gnc_node);

  	// wait for FCU connection
	wait4connect();

	//wait for used to switch to mode GUIDED
	wait4start();

	//create local reference frame 
	initialize_local_frame();

	//request takeoff
	takeoff(3);

	//specify spiral parameters
	double radius = 5.0;
	double rotations_per_second = 2;
	double forward_velocity = 5.0;
	int num_waypoints = 100;
	double initial_height = 3.0;

	//generate spiral waypoints
	std::vector<gnc_api_waypoint> waypointList;
	for (int i = 0; i < num_waypoints; ++i)
	{
		double t = static_cast<double>(i) / num_waypoints;
		double angle = 2 * M_PI * rotations_per_second * t;

		double x = radius * sin(angle);
		double y = radius * cos(angle);
		double z = initial_height + forward_velocity * t;
		double theta = angle * 180 / M_PI;

		gnc_api_waypoint nextWayPoint;
		nextWayPoint.x = x;
		nextWayPoint.y = y;
		nextWayPoint.z = z;
		nextWayPoint.psi = theta;
		waypointList.push_back(nextWayPoint);
	}

	//specify control loop rate. We recommend a low frequency to not overload the FCU with messages.
	ros::Rate rate(2.0);
	int counter = 0;
	while (ros::ok())
	{
		ros::spinOnce();
		rate.sleep();

		if (check_waypoint_reached(0.3) == 1)
		{
			if (counter < waypointList.size())
			{
				set_destination(waypointList[counter].x, waypointList[counter].y, waypointList[counter].z, waypointList[counter].psi);
				counter++;
			}
			else
			{
				//land after all waypoints are reached
				land();
			}
		}
	}
	return 0;
}

