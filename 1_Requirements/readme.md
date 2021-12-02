# **REQUIREMENTS**

## **Introduction**

The objective of the project is to design and implement an ultrasonic distance meter. The device described can detect the target and calculate the distance of the target. The ultrasonic distance meter is a low cost, and simple device for distance measurement. The device calculates the distance with suitable accuracy and resolution

## **Future Scope**

 Can provide voice feedback system

## **Features**
-  Ease of use.
-  Cost effective.
-  Measures accurate distance.
-  Measures objects regardless of shape, color or surface texture.

## **Defining our System**

In this project, ultrasonic sensor with Arduino is used to determine the distance of an obstacle from the sensor.The basic principle of ultrasonic distance measurement is based on ECHO. When sound waves are transmitted in the environment then waves return back to the origin as ECHO after striking on the obstacle. So we only need to calculate the traveling time of both sounds means outgoing time and returning time to origin after striking on the obstacle. As the speed of the sound is known to us, after calculations we are able to calculate the distance.

# SWOT ANALYSIS
## Strengths
 • Simple device for distance measuremen.
 • Cost effective. 
 • Maintenance is easy.
 
### Weakness
 • Limited range.
 
### Opportunities 
 Audio and camera can be used to make it advantageous
 
### Threats
Incase high voltage occurs components may get damage.

# **4W's and 1H**

## Who
Visual impaired person can use it for obstacle detection for assisantance example by implementing this system on white cane etc.

## What 
This system is used for measuring the distance between the object or obstacle as it provides accurate distance. 

## When 
This system isn used when we want to calculate the approxomate distance from a particular object inorder to avoid the obstacle.

## Where 
 System designed can be implemented in several applications, like obstacle detection, in industries, companies also has applications in robotics.
 
##  How
 As the ultrasonic sensor uses transmitter to transmit sound waves and oncethe transmitted wave  bounce back and is received by ultrasonic receiver. By using the reciver timing distance is calculated.
 
## Details requirements
### High Level Requirements

| ID | Description | Status |
|------| ------| ------|
| HLR1 |System shall be able to detect object | Implemented
|HLR2  |System shall be able to calculate the distance in any given range | Implemented
|HLR3  | System shall be able to modifying range according the position of object|	Implemented

#### Low Level Requirements

| ID | Description | Status |
|-------|------|------|
| LLR1 |System must display data without error | Implemented

 
