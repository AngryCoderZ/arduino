  int a=10;
  float b=9.30;
  bool value=true;
  String data="hello world!";
  char bb='C';
  
void setup() {
  Serial.begin(9600);  
   
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(a);
  Serial.println(b);
  Serial.println(value);
  Serial.println(data);
  Serial.println(bb);
}
