// 超音波センサーを使って、近くにものがあるとLEDが光るシステム
const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int LED_PIN = 4;


void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);
  long distance = duration * 0.034 / 2;

  if (distance < 20) {
    // 20cm未満ならLEDを点灯
    digitalWrite(LED_PIN, HIGH);
  } else {
    // 20cm以上ならLEDを消灯
    digitalWrite(LED_PIN, LOW);
  }

  delay(100);
}
