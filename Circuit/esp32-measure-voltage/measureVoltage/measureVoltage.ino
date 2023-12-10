int battPin = 33;
int battValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  battValue = analogRead(battPin);
  Serial.println(map(battValue,0.0f,4095.0f,0,100));
  delay(500);
}
