#include <Stepper.h>

const int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

const int LDR_LEFT  = A0;
const int LDR_RIGHT = A1;

const int threshold = 50;

// Position limits
const int MIN_POS = -512;   // -90°
const int MAX_POS =  512;   // +90°

int currentPos = 0;

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(10);
}

void loop() {

  int left = analogRead(LDR_LEFT);
  int right = analogRead(LDR_RIGHT);

  if (left > right + threshold) {
    if (currentPos > MIN_POS) {
      myStepper.step(-5);
      currentPos -= 5;
    }
  }

  else if (right > left + threshold) {
    if (currentPos < MAX_POS) {
      myStepper.step(5);
      currentPos += 5;
    }
  }

  Serial.print("Position: ");
  Serial.println(currentPos);

  delay(20);
}