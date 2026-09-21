#define LED_PIN 7

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // 1. 처음 1초 동안 켜짐
  digitalWrite(LED_PIN, LOW);   // LOW가 켜짐
  delay(1000);

  // 2. 다음 1초 동안 5번 깜빡임
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, LOW);
    delay(100);
    digitalWrite(LED_PIN, HIGH); // HIGH가 꺼짐
    delay(100);
  }

  // 3. 꺼짐 + 정지
  digitalWrite(LED_PIN, HIGH);  // HIGH로 끄기
  while (1) {}
}
