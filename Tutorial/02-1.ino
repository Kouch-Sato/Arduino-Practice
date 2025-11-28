// ボタンを押している間だけLEDが光るプログラム
void setup() {
  pinMode(3, INPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  if (digitalRead(3) == HIGH) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
}
