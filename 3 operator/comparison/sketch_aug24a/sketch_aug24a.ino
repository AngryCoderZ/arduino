int a=6;
int b=8;
void setup() {
  Serial.begin(9600);
  
  Serial.print("a==b: ");
  Serial.println(a==b);
  
  Serial.print("a>b: ");
  Serial.println(a>b);
  
  Serial.print("b>a: ");
  Serial.println(b>a);

   Serial.print("b>=a: ");
  Serial.println(b>=a);

}

void loop() {
  // put your main code here, to run repeatedly:

}
