const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {

pinMode(ledPin, OUTPUT);

pinMode(interruptPin, INPUT);
// configure the interrupt call-back: blink is called everytime the pin
// goes from low to high.
attachInterrupt(digitalPinToInterrupt(interruptPin), blink, RISING);
}

void loop() {
  digitalWrite(ledPin, state);
}

void blink() {
  state = !state;
}
