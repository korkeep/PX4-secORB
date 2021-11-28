# PX4-secORB
By adding an authentication function to uORB, an IPC (Inter Process Communication) mechanism used inside the PX4 drone device, it can protect the main assets of a drone system by preventing malicious modules from running. 🚁🔐 </br>

## PX4 Autopilot
**PX4 Autopilot** is an open-source autopilot system for Unmanned Aerial Vehicle. **PX4 Autopilot** guarantees scalability so that the PX4 ecosystem can be maintained by providing a standard for drone hardware and software.  
- [PX4 Github](https://github.com/PX4/PX4-Autopilot)
- [PX4 Autopilot](https://docs.px4.io/master/en/)
- [QGroundControl](http://qgroundcontrol.com/)
- [MAVLink Protocol](https://mavlink.io/en/)

## PX4 uORB
uORB is an IPC mechanism used inside the PX4 drone device, and is an asynchronous messaging API of the Publish/Subscribe model. Using the uORB API provided by PX4, it is possible to develop drone software that exchanges data with other components of PX4. </br>
| uORB API | Description |
| --- | --- |
| orb_advertise | Used when publishing a topic for the first time |
| orb_unadvertise | Used to remove advertised topics by orb_advertise |
| orb_publish | Used to publish an updated topic |
| orb_subscribe | Used to subscribe to an updated topic |
| orb_exists | Check if topic is created |
| orb_check | Check if topic is updated |
| orb_stat | Returns the timestamp of topic |
| orb_copy | Copy the topic's data |
| orb_set_interval | Setting the check interval of topic |
| orb_get_interval | Returns the check interval of topic |
| orb_priority | Set the priority of the topic |

## Implementation
This is the architecture of the PX4-secORB with an authentication mechanism added to the PX4 uORB. In the orb_publish process, a function to generate and attach a MAC is implemented, and a new MAC is created in the orb_subscribe process to compare it with the MAC value transmitted in the orb_publish stage. By adding a MAC to the PX4 uORB data, authentication and integrity of the message can be guaranteed. If the mechanism proposed in this project is applied, the security of the drone system can be strengthened because only the authenticated uORB message of the PX4 software module is accepted as a normal message. </br></br>
<img title="PX4-secORB" alt="PX4-secORB" src="https://user-images.githubusercontent.com/20378368/141036765-339df757-461b-4a94-b8c8-c37d0f38125e.png" width="600"/> 