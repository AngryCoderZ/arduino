#define pinPot A2 
#define led 13 
void setup() {
  Serial.begin(9600);
pinMode(led,OUTPUT);


}

void loop() {
  int pot = analogRead(A2);

int b= pot/4;
 Serial.println(b);
analogWrite(led,b);
}
