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

- Well Created a script and Used the formulas given in the questions I have iterated lot of times in the simulation software and by doing some research I have found out that These 3 equations may give some good results for spiral trajectory compared to those given in the question
- The 3 equations are
- ""
  
 		 double t = static_cast<double>(i) / num_waypoints;
		double angle = 2 * M_PI * rotations_per_second * t;

		double x = radius * sin(angle);
		double y = radius * cos(angle);
		double z = initial_height + forward_velocity * t;
		double theta = angle * 180 / M_PI;
"" 
- you can find the code at spiral. cpp in iq_gnc scripts 
- and I have recorded the trajectory of the drone and uploaded as the video in youtube and below posting its link and have a look at it
- https://www.youtube.com/watch?v=M-y1ViYV5BY
![Screenshot from 2023-07-02 14-32-03](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/f22b95a2-9474-4054-a87a-ca84a5b0c95b)
![Screenshot from 2023-07-02 14-31-51](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/0a5089f9-ed8e-4215-aa90-9557fabeccf9)
![Screenshot from 2023-07-02 14-31-28](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/879fde98-081c-4241-a01a-6bd081ca4e96)
![Screenshot from 2023-07-02 14-31-40](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/c48643e7-dbc7-4c76-b47b-ee5b69c88ec6)
- The above video is having a radius of 5 and if I decrease the radius to 1 ,the output will look like this
- ![Screenshot from 2023-07-02 17-45-22](https://github.com/SampathGanesh01/Assignment_Zebu/assets/84275114/86d2f05f-f10f-4176-9221-673a9833b9be)
  

# 3. AruCo landing 
- well I was unable to complete that I was thinking to use Darknet ros for yolo object detection and develop a script for that one,  but my cuda was not supporing that I was getting an error of
- " CUDA Error: invalid device symbol "
- Well I was unable to solve that error till now and will try to solve and In between I explored a lot about arruco marker and tried to create a script from the examples I have seen in some youtuve tutorials which i wil be uploading above

- Thank you
- Please give me  a feedback , so that i can devolop more and Looking forward to hearing from you
- 
# REFRENCES
- I was very new to drones as I have prior experience in UGV and I have learnt everything from scratch in past two days from Intelligent-Quads  Youtube tutorials , well from installations to scripts I Have took refrence from them 
