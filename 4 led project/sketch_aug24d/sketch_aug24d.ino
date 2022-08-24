//int p = 13;
#define p 13

void setup() {
  Serial.begin(9600);
  pinMode(p,OUTPUT);
}

void loop() {
  digitalWrite(p,HIGH);
  delay(300);
  digitalWrite(p,LOW);
  delay(300);
}
