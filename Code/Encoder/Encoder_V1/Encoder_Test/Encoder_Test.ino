const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;
unsigned long count = 0;
unsigned long RPM = 0;
unsigned long currentMillis = 0;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, RISING);
}

void loop() {
  digitalWrite(ledPin, state);
  currentMillis = millis();
  
  if (currentMillis - previousMillis >= interval) 
  {
    previousMillis = currentMillis;
    RPM = count/2;
    Serial.println(RPM);
    count = 0;
  }
}

void blink() 
{
  state = !state;
  count ++;
}
