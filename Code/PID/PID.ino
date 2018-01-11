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

