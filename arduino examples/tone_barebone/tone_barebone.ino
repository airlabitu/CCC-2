int soundPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(soundPin, OUTPUT);
  tone(soundPin,  300); // setting one frequency 'once'
}

void loop() {
  // put your main code here, to run repeatedly:
}
