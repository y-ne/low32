#include <Servo.h>

Servo srv;

#define ONBOARD_LED PC13
#define SERVO_PIN PB9
#define POT_PIN PA7

void setup() {
  srv.attach(SERVO_PIN);
  pinMode(ONBOARD_LED, OUTPUT);
  pinMode(POT_PIN, INPUT);
  digitalWrite(ONBOARD_LED, 0);
}

void loop() {
  int val = analogRead(POT_PIN);

  int time_delay = map(val, 0, 1000, 1000, 500);

  srv.write(0);
  delay(time_delay);

  srv.write(90);
  delay(time_delay);
}
