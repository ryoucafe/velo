void passwordGen() {
  if (key != 'C') return; //leaves function if button is not pressed
  code = "";
  lcd.clear();
  lcd.print("Code: ");
  lcd.setCursor(6, 0);
  for (int i = 0; i<nchar; i++) {   
      code += random(10);
  }
  lcd.print(code);
  motor.write(90);
  delay(500);
}