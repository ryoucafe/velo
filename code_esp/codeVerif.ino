// TO OPTIMISE

void verif() {
  if (key != 'B') return;
    
  if (code == pad || key == 'E') {
    motor.write(0);
    lcd.clear();
    lcd.setCursor(4, 0);
    lcd.print("Code Bon");
    pad = "";
  }
  else {
    lcd.clear();
    lcd.setCursor(6, 0);
    lcd.print("Code");
    lcd.setCursor(4, 1);
    lcd.print("Invalide");
    delay(1500);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Code: ");
    lcd.setCursor(7, 0);
    lcd.print(code);
    pad = "";
  }

}