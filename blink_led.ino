#define LED_OUT_PIN 13

void setup() {
  pinMode(LED_OUT_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_OUT_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_OUT_PIN, LOW);
  delay(1000);
}
