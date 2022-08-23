  int x=10;
  #define pi 3.14
  
  void setup() {
    Serial.begin(9600);
  // x=x+5  -> x+=5;
  x+=5;
  Serial.println(x);
  x-=6;
  Serial.println(x);
  x*=8;
  Serial.println(x);
  x/=5;
  Serial.println(x);
//  
    Serial.println(pi);
  
  }
  
  void loop() {
    // put your main code here, to run repeatedly:
  
  }
