const int redLedPin = 13;
const int greenLedPin = 12;
const int buzzerPin = 9;
const int switchPin = 10;

int switchPinStatus = 0;

void setup()
{
  // put your setup code here, to run once:
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (switchPinStatus == HIGH)
  {
    for (int repetition = 0; repetition < 3; repetition++) {
      switchOnBuzzer();
      switchOnGreenLed();
      delay(1000);
      switchOffGreenLed();
      switchOffBuzzer();
      delay(1000);
    }
    longBlinkRedLed();
  }
  else
  {
    doubleBlinkRedLed();
  }
}


void doubleBlinkRedLed() {
  for (int repetition = 0; repetition < 2; repetition++) {
    switchOnRedLed();
    delay(500);
    switchOffRedLed();
    delay(500);
  };
}

void longBlinkRedLed() {
  switchOnRedLed();
  delay(1000);
  switchOffRedLed();
  delay(1000);
}

void switchOnGreenLed() {
  digitalWrite(greenLedPin, HIGH);
}

void switchOnBuzzer() {
  digitalWrite(buzzerPin, HIGH);
}

void switchOnRedLed() {
  digitalWrite(redLedPin, HIGH);
}

void switchOffRedLed() {
  digitalWrite(redLedPin, LOW);
}

void switchOffGreenLed() {
  digitalWrite(greenLedPin, LOW);
}

void switchOffBuzzer() {
  digitalWrite(buzzerPin, LOW);
}
