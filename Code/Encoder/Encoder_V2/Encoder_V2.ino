const byte interruptPin = 2;
volatile byte state = LOW;
unsigned long count = 0;
boolean counted = false;

void setup() {
  Serial.begin(9600);
  pinMode(interruptPin, INPUT);
    //attachInterrupt(digitalPinToInterrupt(interruptPin), blinkup, RISING);
    attachInterrupt(digitalPinToInterrupt(interruptPin), blinkdown, CHANGE);
}

void loop() {
    delay(1000);
    count = count*60/4/6.3;
    Serial.println(count);
    count = 0;
}
/*void blinkup() 
{
  if (counted == false){
  counted = true;
  }
  
}
*/
void blinkdown() 
{
  //if (counted == true){
  count ++;
  //counted = false;
  //}
}
