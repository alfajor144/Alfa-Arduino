#include<Servo.h>
Servo myservo;

void setup() {
  myservo.attach(6);
}

void loop() {
  myservo.write(150);
  delay(200);
  myservo.write(30);
  delay(200);
}
