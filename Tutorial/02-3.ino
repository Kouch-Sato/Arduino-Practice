// ボタンを押すたびにLEDの点灯・消灯を切り替えるプログラム
const int LED_1_PIN = 7;
const int LED_2_PIN = 10;
const int BUTTON_PIN = 3;
bool isLEDActive = false;
bool lastState = LOW;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH && lastState == LOW) {
    isLEDActive = !isLEDActive;
    delay(50); // チャタリング防止
  }

  lastState = digitalRead(BUTTON_PIN);

  if (isLEDActive) {
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, LOW);
  } else {
    digitalWrite(LED_1_PIN, LOW);
    digitalWrite(LED_2_PIN, HIGH);
  }
}
