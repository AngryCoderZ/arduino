int a=10;
int b=15;
void setup() {
  Serial.begin(9600);
  //or operator ||
  //And operator &&
  Serial.println(a==10||b==10);
  Serial.println(a==10&&b==10);
  Serial.println(a==10&&b==15);
  Serial.println(!(a==10&&b==15));

}

void loop() {
  // put your main code here, to run repeatedly:

}
