#define row1 13
#define row2 12
#define row3 11

void setup() {
  Serial.begin(9600);
  pinMode(row1, OUTPUT);
  pinMode(row2, OUTPUT);
  pinMode(row3, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(row1, HIGH);
    digitalWrite(row2, HIGH);
    digitalWrite(row3, HIGH);
    delay(200);
    digitalWrite(row1, LOW);
    digitalWrite(row2, LOW);
    digitalWrite(row3, LOW);
    delay(200);
  }
  digitalWrite(row1, HIGH);
  delay(200);
  digitalWrite(row2, HIGH);
  delay(200);
  digitalWrite(row3, HIGH);
  digitalWrite(row1, LOW);
  digitalWrite(row2, LOW);
  delay(200);

  digitalWrite(row2, HIGH);
  delay(200);
  digitalWrite(row1, HIGH);
  delay(200);

}
