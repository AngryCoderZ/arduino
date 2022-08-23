  int a=10;
  int b=20;
  void setup() {
  Serial.begin(9600);
//  add
  Serial.print("Sum a+b: ");
  Serial.println(a+b);
//  Subtract
  Serial.print("Sum a-b: ");
  Serial.println(a-b);
//  multiply
  Serial.print("Sum a*b: ");
  Serial.println(a*b);
//  division
  Serial.print("Sum a/b: ");
  Serial.println(a/b);
//  Modulus
 Serial.print("Sum a%b: ");
  Serial.println(a%b);
//  increment and decrement
//a++=a+1;
//++a=1+a
//b--=b-1
//--b=1-b
  Serial.println(++a); 
  Serial.println(--b); 
  a=a++;
  a=a--;
  Serial.println(a); 
  Serial.println(b); 
  
  }

  void loop() {
    // put your main code here, to run repeatedly:
  
  }
