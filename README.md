# Assignment_Zebu
Below is the assignment Given for Zebu Intelligent systems round 2 

# 1. Simulation environment setup
- I have Booted my system to Ubuntu 18.04 
- Installed Ardupilot , QGC Control and Mavros
- Installed Gazebo 
- Installed ROS Melodic 
- Used IRIS Drone for the simulations 
- ![Screenshot from 2023-07-02 14-08-20](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/d69cff4b-28fe-4fbb-a2bc-79345d61e8c2)

- Implemented Simulation in the Loop
- Also Implemented Basic things like Takeoff , Landing and Going to specific Waypoint by sending through a ros code 
- Also done PLotting the Trajectories (i.e Odometry ) in RVIZ

# 2.Spiral path implementation

- Well Created a script and Using the formulas given in the questions I have iterated lot of times in the design and by doing some research I have found out that These 3 equations may give some good results for spiral trajectory
- The 3 equations are
- ""
  
 		 double t = static_cast<double>(i) / num_waypoints;
		double angle = 2 * M_PI * rotations_per_second * t;

		double x = radius * sin(angle);
		double y = radius * cos(angle);
		double z = initial_height + forward_velocity * t;
		double theta = angle * 180 / M_PI;
"" 
- and I have recorded the trajectory of the drone and uploaded as the video in youtube and below posting its link and have a look at it
- https://www.youtube.com/watch?v=M-y1ViYV5BY
![Screenshot from 2023-07-02 14-32-03](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/f22b95a2-9474-4054-a87a-ca84a5b0c95b)
![Screenshot from 2023-07-02 14-31-51](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/0a5089f9-ed8e-4215-aa90-9557fabeccf9)
![Screenshot from 2023-07-02 14-31-28](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/879fde98-081c-4241-a01a-6bd081ca4e96)
![Screenshot from 2023-07-02 14-31-40](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/c48643e7-dbc7-4c76-b47b-ee5b69c88ec6)
