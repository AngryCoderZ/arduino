void setup() {
  Serial.begin(9600);
  int i = 0;
  while(i<5)
  {
    Serial.println(i);
    i++ ;
    
    if (i==3){ 
      i++;
      }
   }

   Serial.print("More....");

}

void loop() {
  // put your main code here, to run repeatedly:

}
