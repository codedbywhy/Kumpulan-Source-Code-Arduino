
  #include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop(){
  lcd.setCursor(0,0);
  lcd.print("halo");
  lcd.setCursor(0,1);
  lcd.print("aowkwkwkwkwkww");
}
