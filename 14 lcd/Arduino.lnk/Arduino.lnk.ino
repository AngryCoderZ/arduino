#include <LiquidCrystal.h>
#define RS 13
#define E 12
#define D4 11
#define D5 10
#define D6 9
#define D7 8

LiquidCrystal lcd(RS,E,D4,D5,D6,D7);
int counter = 0;
void setup() {
  lcd.begin(16,2);
  lcd.setCursor(1,0);
  lcd.print("Hello");
  lcd.setCursor(3,1);
  lcd.print("World!!");
  delay(300);
  lcd.clear();
}

void loop() {
  lcd.setCursor(2,0);
  lcd.print("world:"); 
  lcd.setCursor(8,0);
  lcd.print(counter);
  delay(200);
  counter++;

}
