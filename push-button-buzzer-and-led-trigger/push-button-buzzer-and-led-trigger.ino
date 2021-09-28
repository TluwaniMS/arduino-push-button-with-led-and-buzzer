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
  }
  else
  {
  }
}


void doubleBlinkRedLed() {}

void switchOnGreenLed() {}

void switchOnBuzzer() {}

void switchOffRedLed() {}

void switchOffGreenLed() {}

void switchOffBuzzer() {}
