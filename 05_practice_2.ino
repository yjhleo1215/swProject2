#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(PIN_LED, 0); // 켜줌
  
  delay(1000); // 1초동안 켜둠
  
  digitalWrite(PIN_LED, 1);  // 1초 켜준 후 끔
  delay(1);
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 0); // 0.2초 켜주기 시작

    delay(100); // 0.2초 기다림

    digitalWrite(PIN_LED, 1); // 0.2초 기다리기 끝나고 꺼줌
    delay(100);
  }
  
  while (1) {}
}
