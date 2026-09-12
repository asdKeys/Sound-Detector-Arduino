//pins
const int soundPin = A1;
const int ledPin = 8;

//caps the sound and filtes background noise
const int sensitivity = 58;

void setup() {
  //sets pins to input/output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //find the amount of noise
  int soundValue = analogRead(soundPin);

  //turn LED on/off depending if there is a certain level of noise
  if (soundValue > sensitivity) {
    do {
      digitalWrite(ledPin, HIGH);
    } while (soundValue < sensitivity);
    delay(1200);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  //stops glitches
  delay(100);
}