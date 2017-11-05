//Motor Pins
int DIR_A = 12;
int DIR_B = 13;
int PWM_A = 3;
int PWM_B = 11;
int BRK_A = 9;
int BRK_B = 8;

int delayTime = 100000;

//Micro step values
int microsteps = 200;
float amp  = 255;
int pulseDelay = 10;
int a[200];
int b[200];
int idxG;


void setup()
{
  //Being serial comms for debug
  Serial.begin(9600);
  
  //Buid lookup table for microstepping
  int idx;
  idxG = 0;
  for(idx = 0; idx < microsteps; idx ++){
    a[idx] = amp *sin(idx * 2 * PI/microsteps);
    b[idx] = amp *cos(idx * 2 * PI/microsteps);
  }

  pinMode(DIR_A,OUTPUT);
  pinMode(DIR_B,OUTPUT);
  pinMode(BRK_A,OUTPUT);
  pinMode(BRK_B,OUTPUT);
  
  digitalWrite(BRK_B,LOW);
  digitalWrite(BRK_A,LOW);
}

void loop()
{
  //FULL_STEP();
  //DOUBLE_STEP();
  //HALF_STEP();
  MICRO_STEP();
}


void FULL_STEP(){   //FULL STEP
  while (true){
    MOTOR_WRITE(1,1,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,1,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,0,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(1,0,255,255);
    delayMicroseconds(delayTime);
  
  }
}



void DOUBLE_STEP()   //DOUBLE STEP
{
  while (true){
    MOTOR_WRITE(1,1,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,1,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,0,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(1,0,255,255);
    delayMicroseconds(delayTime);
  }
}


void HALF_STEP()   //HALF STEP
{
  while (true){
    delayMicroseconds(delayTime);
    MOTOR_WRITE(1,0,255,0);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(1,1,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,1,0,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,1,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,0,255,0);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,0,255,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(0,0,0,255);
    delayMicroseconds(delayTime);
    MOTOR_WRITE(1,0,255,255);
  }
}

void MICRO_STEP()    //MICRO STEP
{
  WriteValue(a[idxG],PWM_A,DIR_A);
  WriteValue(b[idxG],PWM_B,DIR_B);
  idxG++;
    if(idxG == microsteps){
      idxG = 0;
    }
  delayMicroseconds(pulseDelay);
}


void MOTOR_WRITE(int DA,int DB,int PA,int PB)
{
  while(true){
    digitalWrite(DIR_A,DA);
    digitalWrite(DIR_B,DB);
    analogWrite(PWM_A, PA);
    analogWrite(PWM_B, PB);
  }
}

void WriteValue(int value, int chanAnalog, int chanDigit)
{
  int valueAbs = abs(value);
  analogWrite(chanAnalog, value);
    if(value>0){
      digitalWrite(chanDigit,HIGH);
    }else{
      digitalWrite(chanDigit,LOW);
    }
}


