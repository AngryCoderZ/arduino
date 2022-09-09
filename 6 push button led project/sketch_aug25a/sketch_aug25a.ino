#define pinLed 13
#define pinButton 7 
void setup() {
  Serial.begin(9600);
  pinMode(pinLed,OUTPUT);
  pinMode(pinButton,INPUT);
  
  
}

void loop() {
  int value;
  value = digitalRead(pinButton);
  if(value==1){
    digitalWrite(pinLed,HIGH);
    }
    else if(value==0){
       digitalWrite(pinLed,LOW);
      }
  Serial.println(value);

}
