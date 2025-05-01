#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
// 2- rs 3-en 4 to 7 DB4 to DB7

void setup()
{
  lcd.begin(16,2);
  lcd.print("Welcome");
}

void loop()
{
  // this remains empty
}
