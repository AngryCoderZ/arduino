int day=5;
void setup() {
  Serial.begin(9600);
  switch(day){
    case 1:
    Serial.print("today is monday");
    break;
    case 2:
    Serial.print("today is tuesday");
    break;
    case 3:
    Serial.print("today is wednesday");
    break;
    case 4:
    Serial.print("today is thursday");
    break;
    default:
    Serial.print("no day found");
    }

}

void loop() {
  // put your main code here, to run repeatedly:

}
