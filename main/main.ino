#define ONBOARD_LED PC13

void setup() {
  pinMode(ONBOARD_LED, OUTPUT);
}

void loop() {
  digitalWrite(ONBOARD_LED, 0);
}
