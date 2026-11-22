#include <ESP32Servo.h>

Servo myServo;

void setup() {
  Serial.begin(115200);

  myServo.setPeriodHertz(50);
  myServo.attach(26, 500, 2400);

  Serial.println("Servo Test Started");
}

void loop() {
  myServo.write(0);
  Serial.println("Servo Angle: 0 degrees");
  delay(2000);

  myServo.write(90);
  Serial.println("Servo Angle: 90 degrees");
  delay(2000);

  myServo.write(180);
  Serial.println("Servo Angle: 180 degrees");
  delay(2000);
}