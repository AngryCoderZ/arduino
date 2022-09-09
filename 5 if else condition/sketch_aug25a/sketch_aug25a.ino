int a = 20;
int b = 20;
int z = 10;
void setup() {
  Serial.begin(9600);
  //  if(condition){-----}
  if (a < b || a>z ) {
    Serial.print("a is smaller than b & greater than z");
  }
  else if(a>b){
    Serial.print("a is greater than b");
  }
  else{
   Serial.print("a is equal to b");
    }
}

void loop() {

}
