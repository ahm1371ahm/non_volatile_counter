# What is Non-Volatile Counter
Non-volatile counter (NVC) is a free and open-source C++ library that acts like a normal counter; However, its value is stored on the disk rather than being
stored on the RAM. If you rerun the application that uses this counter, its value is preserved.
This library uses the file-system to store values; As a result, be cautious when using it in high-speed loops. 
This light-weight library is specially useful if you desire to store some sequence wihtout wanting to use databases or using your own file-system logic.
# Use Cases
You can use this library in may cases. For example, if you have an embeded computer like Raspberry Pi or Jetson and you want to creating log files, when your application is re-executed, you cannot simply use the system datetime as names for these log files. Since, these boards do not have a RTC unit and 
when your board is restarted, it date starts from the beginning, unless it updates its date from the internet. If you use this datetime as names for your log files, you may accidentally overwrite your previous files. As a result, it is better to have your counting system for file names. However, you cannot use a simple (volatile) counter in your application for this purpose. In this case, NVC library may help you continue couting even when your system is restarted.
- Log files in Devices without an RTC
- Critical loops when you need to continue counting after power outage wihtou losing the counting state
# How to build?
# How to use?