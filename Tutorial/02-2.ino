// ボタンを押すたびにLEDの点灯・消灯を切り替えるプログラム
bool isLEDActive = false;
bool lastState = LOW;

void setup() {
  pinMode(3, INPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  if (digitalRead(3) == HIGH && lastState == LOW) {
    isLEDActive = !isLEDActive;
    delay(50); // チャタリング防止
  }

  lastState = digitalRead(3);

  if (isLEDActive) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
}
