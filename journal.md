# ROCO_222 Logbook by Jonathan Smith

This logbook is intended to be a record of all the work completed during the practical  
sessions for the ROCO_222 module.

## My first Markdown document

This is my first document written using the markdown syntax.  
Markdown is a markup language that is designed to be easily converted  
to HTML. Markdown is commonly used to format readme files and create rich  
text using a plain text editor. Syntax examples are shown below.  

Using asterisks a bulletpointed list can be produced.  
* Sample Text A
* Sample Text B
* Sample Text C

Using numbers with a point after will enable a numbered list to be produduced.  
1. Sample Text 1
2. Sample Text 2
3. Sample Text 3

I have also been using double space at the end of each line  
to make a line break. Furthermore and complete blank line will  
seperate a paragraph.  

Other modifiers include _italic_ __bold__ and 'monospace'.  
Instead of underscores asterisks can also be used for example:  
*italic* and **bold**.

I can also use markup to make links. An example link to my reference  
material is produced below.

Daring Fireball [link](https://daringfireball.net/projects/markdown/)

Using a triple dash a complete line added.

---

## Command-line 101

Using the terminal I tested the list of console commands and descibed what each
command does.

### ls
ls lists the current directory contents  
ls stands for "list segments"  
The user can specify a file location for the command to be performed in.  
An example includes 'ls Downloads' which lists the contents of the downalod folder.  

### cd /tmp
cd is used to change the current directory. /tmp is a location. in this example  
cd /tmp changes the directory to /tmp.  
cd stands for "change directory"  

### cd $HOME
cd %HOME changes the directory to the home user file location.  
This is typically /home/your-username where as /home would navigate to the directory  
for all registered users on the system.

### mkdir name_of_directoy
Make directorys is used to create a new directory in the current folder.  
The user wil define the name of the new directory at the same time.  
For example: $ mkdir NewFolder  
This makes a new folder called 'NewFolder' in the current directory.  

### echo "Hello" > hello.md
Echo command is used to output a string to the standard output or a file.  
In this example the string "Hello" is output to a file called hello.md.  

### cat hello.md
Cat (concatenate) is used to read the contents of a file. Using cat hello.md  
reads back the file created using the previous command "echo "Hello" > hello.md"  

### cp hello.md hello-again.md
cp or copy files is used to make a new copy of an existing file. It is important to name the new copy with a unique file name that is different from the original.

### rm hello.md
The rm command is used to remove files or directories. In this example the command removes the file called   hello.md from the current directory.  

### rm -rf
This is a more dangerous version of the rm command that has two modifiers. The r means that the remove command   will run   
recursively removing the files and sub directorys in the file structre. The f means that the remove   command will force files to be deleated even if they cause errors.  
 For example if a file is open in a program   using the force command the file can be deleted.  

### cat /proc/cpuinfo
The cat command is used to show files on the terminal which is refered to as the "standard output".  
THe command references a virtual file called cpuinfo.

The proc file system contains special virtual files that represent the current state of the kernal. The proc file system can be used   
to view important infromation about system hardware and processes. In this instance the cpuinfo file provides upto date infromation about the CPU.  

### sudo
sudo is allows the command to run regardless of admin or safegaurds. **Use with caution**

---

## CPU Usage
Using the 'top' command I can observe all the processes running on the linux system and view their CPU usage. This tool is comparable to the Task Manager on windows.  

Using the 'htop' command I can view the cpu usage and close down problem causing processes.

---

### Making directory/file structures for roco222
I made my file structre as so:  
$home  
ls  
mkdir roco222  
cd roco222  
mkdir jonny  
cd jonny  
mkdir lab-journal  
$home   

---

### Making a github account
I then went to GitHub.com and made a new account.

Using terminal i intialised my git repository in my roco222 folder using the  
'git init' command. Then I used ls -al to show all the files. The outout is shown below.  
total 16  
drwxrwxr-x  4 jonny jonny 4096 Sep 25 09:56 .  
drwxr-xr-x 30 jonny jonny 4096 Sep 25 09:47 ..  
drwxrwxr-x  7 jonny jonny 4096 Sep 25 09:56 .git  
drwxrwxr-x  3 jonny jonny 4096 Sep 25 09:43 jonny  

I then associated the repository with my github account:  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ git config  --global user.name "Jonathan Smith"  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ git config --global  user.email jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ cat ~/.gitconfig [user]  
	name = Jonathan Smith  
	email = jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ git config --global  user.email jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$ cat ~/.gitconfig [user]  
	name = Jonathan Smith  
	email = jonathan.smith@students.plymouth.ac.uk  
jonny@jonny-Lenovo-Yoga-3-14:~/roco222$   

## My first commit
Using the command 'git commit -m"Created Journal" I produced a new commit containing my Journal.  
I can check my work using the 'git log' command to show the recent changes.  

Then using the 'git push' command I can upload the new version to GitHub. Shown below is a screenshot of the online repository:  
![Figure 1-1](  https://github.com/Jonsmith9847/roco222/blob/master/photos/GitHub.png  )

---
 
### Installing the Ardunio IDE
'27-9-17'

The Ardunio IDE will be used later on during labs to program the Ardunio microcontrollers.  
Therefore I decided to install the Ardunio IDE using the terminal.  

Using the command: sudo apt install arduino  
The installer quickly performed the install and I was able to launch the ardunio IDE.  
![Figure 2-2]( https://github.com/Jonsmith9847/roco222/blob/master/photos/ArduinoIDE.png )

---
### Hack into a robot
The task involves connecting to a Nao robot using ssh and bash.  

Firstly I found the IP address of the Nao using the ping command.  
ping chapman.local  
This provied an IP address for the Nao robot.  
In this case the IP address was 192.168.0.184.  

The I used SSH to connect to the robot. The comman used was ssh nao@192.168.0.184.  
The console then asked for a password. I used the default password nao and was able to gain access.  

Using the nano editor I made a new python script file called Hacked.py that contained the pyhton code  
required to make nao speak.  

A sample of the code used to make Nao speak:  

```
from naoqi import ALProxy
tts = ALProxy("ALTextToSpeech", "localhost", 9559)
tts.say("I've hacked you, robot!")

```

I then used the command python Hacked.py to run the python script and make nao speak.  

---

## Building a DC motor

The task requires that we construct a basic dc motor. We are provided with basic components that can be used  
to assemble a rudimentary motor.

### Building the Commutator:

The commutator is a device that is designed to reverse the direction of current flow when the armature is inline   with the magnetic feild.  
This enables the motor to turn a full 360 degrees. Without a commutator the armature will simply move to line up   with the feild and stay in that postion.  

Shown below is the constructed commutator:  
<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Commutator.jpg" width="400" height="500" />

We used copper tape wraped around the cork to make electrical connections. The brushes will then be able to     connect to the communtator and switch the direction as the commutator rotates.  

### Wrapping the coils:

We wrapped 155 turns of copper wire onto the cork and soldered the ends to the commutator.  
I used sand paper to remove the insualtion from the copper wire to ensure that the solder would enable a complete circuit to be made. Shown below is the completed core of the motor:  

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Coils.jpg" width="500" height="400" />

### Magnets, brushes and supports:

We used large paperclips to support the core and magnets. A flat peice of wood was used to hold each support in place. Using more copper tape we also constructed the brushes. The brushes are connected so that they are 180 degrees from each other and contact the commutator at all times. This is acheived by making them spring against the sides of the commutator. Shown below is a photo of the completed motor:

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/motor.jpg" width="500" height="400" />

### Video of testing:
We tested the motor and after some small adjustments we where able to acheive continuous motion at a reasonable   rpm. Click the thumbnail below to open youtube.  

[![DC Motor](http://img.youtube.com/vi/yTVSUlR2SdA/0.jpg)](http://www.youtube.com/watch?v=yTVSUlR2SdA "DC Motor")

Using the video the RPM of the motor can be estimated:  
RPM = (30 revolutions / 10 seconds of video)*(60 seconds)*(240fps/30fps) = 1440 RPM
*Calculations need checking*

## Improving the design

The motor built uses a single coil with two magnetic poles. The system is losley put together and not capable of supporting any load. Therfore with the use of availble tools I improoved the design of the DC motor.

### New stands and bearings
Firstly I collected materials that will be used to construct the new motor design. My parts list includes:

* 2x  608Z bearings  
* 1x  300mm of 8mm threadded rod  
* 50x 8mm washers  
* 50x 8mm nuts  
* PETG Filament for 3D Printing  
* 500g Thinly insulated copper wire  
* Many cups of coffee  

Shown below is the completed stand. I used solidworks to design the part and a 3D printer to manufacture it.  
The STL files have been made availble on the GitHub repository.  

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Stand.jpg" width="400" height="500" />


I designed the part so that the 608Z bearings would slot in with a simple press fit so no hardware was required.
Using nuts and washers the threaded rod was held in alignemnt but allowed to spin freely with little friction.
I also added a small amount of PTFE lubricant to the bearings.

---

## Building an incremental encoder

What is an encoder and why is it used. Rotary incremental encoder using light.

We are going to build a rotary encoder to measure the speed of the DC Motor that we have built. Many designs exist for encoders however we are going to buil a light encoder only.

The encoder generates a signal as the motor shaft rotates. The frequency of this signal is propartional to the angular velocity of the motor shaft. We will use a rotating disc with slots cut out to block and allow light to pass through. Shown below is a photo of the 3d design for the encoder disc.

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/EncoderDisc.png"/>

Circuit diagram
<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/EncoderCIrcuit.png" width="500" height="400" />

Constuction
I then mounted the encoder wheel onto the drive shaft of my motor using two nuts. The completed encoder wheel had two cutouts to keep everything in balance. Furthermore I used two encoder discs so that the gap width could be varied.

Testing
To test the encoder I programmed the arduino micro-controller so that It could detect the encoder pulses using an interrupt pin. The completed code is shown below. Using the built in serial plotter included with the ardunio software I could visualise the output rpm as voltage and current are increased.
 
Code
The completed arduino code for the incremental encoder is shown below:

```
const byte interruptPin = 2;
volatile byte state = LOW;
unsigned long count = 0;
boolean counted = false;

void setup() {
  Serial.begin(9600);
  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
    delay(1000);
    count = count*60/4;
    Serial.println(count);
    count = 0;
}

void blink() {count ++;}
```

The code is relativley straight forward to detect and print the rpm speed. The data can then be used to implement variable speed control using a feedback loop. One more advanced implementation is using PID to control the speed of the motor.

Final Solution/Implementation.

Using the ardunio motor driver we attempted to implement a PID Control system with varying degrees of sucess. We encountered an issue with current draw limiting our abaility to complete this task. The motor driver chips ended up overheating as a result of the larger diameter (lower resistance) wire used to construct the motor. We attempted to solve these issues with the use of stick on heat sinks however heating continued to be an issue.

Regardless of the issues we developed the code to control the motor using a PID loop as shown below:

```
#include <PID_v1.h>
double PPS1;

volatile unsigned long count1 = 0;

unsigned long timep, time, etime;
long currentPPS1 = 0;

long speedSet1;


//Motor pins
int E1 = 3;
int M1 = 12;

int M1S;
int M1D = 1;
int M1last;
float Kp = 1; //Initial Proportional Gain
float Ki = 1; //Initial Integral Gain
float Kd = 1; //Initial Differential Gain
double Setpoint1, Input1, Output1;
PID myPID1(&Input1, &Output1, &Setpoint1, Kp, Ki, Kd, DIRECT);
const int sampleRate = 100;
void setup()
{
  Setpoint1 = 500;
  
  attachInterrupt(digitalPinToInterrupt(2), transition1, CHANGE);
  timep = micros();
  
  PPS1 = count1; //Read encoder PPS1
  Input1 = map(PPS1, 0, 2900, 0, 255);
  Setpoint1 = map(Setpoint1, 0, 2900, 0, 255);
  myPID1.SetMode(AUTOMATIC);
  myPID1.SetSampleTime(sampleRate);
  
}
void loop()
{
//Write speeds
  digitalWrite(M1, M1D);
  speedSet1 = M1S;  
  time = micros();
  etime = time - timep;
  if (etime > 200000)
  {
    currentPPS1 = (count1);
    count1 = 0;
    timep = time;
  }
  PPS1 = currentPPS1;
  Input1 = map(PPS1, 0, 580, 0, 255);
  myPID1.Compute();
  analogWrite(E1, Output1);
}

void transition1(){
count1++;
}

```
## PID Control

PID Control is a type of control loop often used to control systems where the response is not instantanous. PID has benefits and disadvantages that make it both suitable and unsitable for different applications.

PID is used primarly to change and control the rate at which a system reacts to changes of input.

The feedback loop uses three components to calculate its response, P, Proportion, I, Intergral and D DIfferential hence why it is called a PID loop. 

The Propotional feedback is quite simply the error multipled by a value called Kp. The error is allways directly propartional to the error value.

The Intergral feedback is proportional to the time an error has existed for. This is useful when motors stall before they move to their desired final position. The intergral feedback is multipled by a value called Ki

The Differential feedback is proprtional to the rate of change of error. If the error is changing rapidly the system can respond with a strong force to resist and slow the rate of change. This value is multiplied by a value called Kd. 

Kp, Ki, Kd and PID tuning.
PID Systems often require tuning to improove their performance. If Kp, Ki and Kd are set incorrectly the systems can oscilliate out of control or react slowly and to error. It is important that Kp, Ki and Kd are set correctly for the type of system being used. Some tuning profiles will be designed to prevent overshoot while others prioritise speed over accuracy and allow oscillations/hunting for a short period of time.

Many peices of software have been produced to automatically tune PID systems for best results. However in this instance we tuned the system manually to understand the effects our modifications had on the complete system.

Shown below is the final motor design with improoved magnet supports and encoder mounting:
<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/FinalMotor.jpg"/>

The motor draws 2amps during operation however is resistant to heating due to the large diameter wire used in the windings. The motor is capable of starting from any position due the narrow gap width between commutator parts. This gap was acheived using 3d printed slots that allowed a knife to precicley cut the commuator at 4 specific locations.

The primary area for improvment of the design would be the brushes. A new brush mount would have been desirable however the optimal soultion within the given time frame invloved relying on the wire to sping into place. This provided enough pressure to maintain conact with the commutator at high speeds while also preventing excessive wear.

---


##Building a robot arm

The task requires that we construct a robot arm that has a minimum of two axis of movement. I aim to use 4 servo motors to build a robot arm with four axis of movement. 

The robot arm must be controlled using ROS.

###Designing the arm

We are provided with two 9g servos and some cardboard to prototype arm movement.
Using the materials we assembled a basic arm and tested its operation.

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/CardboardArm.jpg" />

We then moved towards developing a more robust robot arm. Using Solidworks I designed the arm components. Using a 3D Printer we then
manufactured the parts. Shown below are some of the design files. 

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Arm.png"/>
<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Base1.png"/>
<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Base2.png"/>

The parts are designed to use the minimal amount of hardware possible to reduce costs. Furthermore the arms geometry is simple so that it can be
modeled in ROS at a later date.

The arm features 4 degrees of movement:
-Pan
-Tilt
-Elbow Joint
-End Effector

Using an ardunio microcontroller sample test code was used to test each axis by running through a predefined set of movments.
Shown below is the completed robot arm once fully assembled

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/RobotArm.jpg"/>

### Using ROS to control a robot 

## Installing ROS

I installed a new updated version of Ubuntu to verision 16.04 LTS. This enables me to install ROS Kinetic Kame for use with my robot arm.
The install process was well documented at http://wiki.ros.org/kinetic/Installation/Ubuntu.

## Setting up ROS:

1. First I launched ROS using the command `roscore`. This launches all the pre-requisites of a ROS-based system and allows me to introduce new nodes to my system.

2. Secondly I configured the Ardunio as a ROS Node. To acheive this I programmed the arduino with the following example code. 

```
#include <ros.h>
#include <std_msgs/UInt16.h>
#include <Servo.h>

using namespace ros;

NodeHandle nh;

Servo servo;

void cb( const std_msgs::UInt16& msg){
  servo.write(msg.data); //0-180
}

Subscriber<std_msgs::UInt16> sub("servo", cb);

void setup(){
  nh.initNode();
  nh.subscribe(sub);
  
  servo.attach(9);//attach pin 9 to servo
}

void loop(){
  nh.spinOnce();
  delay(1);
}
```
This code allows me to address the Ardunio as a ros node and publish to the rostopic "servo"

3. Start and test the new ROS Node.

Firstly I started a serial connection to the Ardunio using the following command
`rosrun rosserial_python serial_node.py /dev/ttyACM0`

Then to test the connection I manually published data to the new node using the command rostopic pub.
`rostopic pub servo std_msgs/UInt16 180`
and then
`rostopic pub servo std_msgs/UInt16 0`

The two commands test the full range of movment for the Pan servo motor for the robot arm.

<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Terminal.png"/>

4. Load the URDF File as the robot description. Firstly navigate to the correct location using `ls` and `cd`. Then run the following command osparam
`set robot_description -t models/robot-arm.urdf`

5. Launch robot state publisher and joint state publisher using the following commands

`rosrun robot_state_publisher robot_state_publisher`

`rosrun joint_state_publisher joint_state_publisher _use_gui:=true`

6. Start Rviz. Using the command `rosrun rviz rviz` the program can be launched opening in a new window.  
<img src="https://github.com/Jonsmith9847/roco222/blob/master/photos/Rviz.png"/>

## URDF: Unified Robot Description Format

Is a method of describing  a robots construction and movement. Most commonly known as kinematics.
The URDF Format uses basic shapes or STLF files to build the geometry of a robot.

an example URDF is shown below:
```
<?xml version="1.0"?>
<robot name="robot_arm">
	<link name="base_link">
		<visual>
			<geometry>
				<cylinder length= "0.06" radius= "0.1"/>
			</geometry>
		</visual>
	</link>
</robot>
```

The joint states are used to compute the angles of each joint and using forward kinematics the ROS can calculate the position of each arm segment.

The ardunio can then be prgrammed to subscirbe to the joint state data and use it to control the position of each motor.

Example ardunio code using the joint state publisher:

```
#include <Servo.h>
#include <ros.h>
#include <sensor_msgs/JointState.h>
using namespace ros;
NodeHandle  nh;
Servo servo;

void cb(const sensor_msgs ::JointState & msg){
	int angle = (int) (msg.position[0] * 180/3.14);	
	servo.write(angle); // Between 0-180
}

Subscriber<sensor_msgs::JointState>
sub("joint_states",cb);

void setup(){
	nh.initNode();
	nh.subscribe(sub);
	servo.attach(9); //attach servo to pin 9
}

void loop(){
	nh.spinOnce();
	delay(1);
}
```

## Launch Files

Launch files are used to group setup and configuration commands together. Using launch files enables complete ros systems to be intialised quickly by starting all the required assets at the same time.


