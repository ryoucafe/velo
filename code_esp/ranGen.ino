void passwordGen() {
  if (key != 'C') return; //leaves function if button is not pressed
  code = "";
  lcd.clear();
  for (int i = 0; i<nchar; i++) {   
      code += random(10);
  }
  lcd.print("Code: " + code);
  motor.write(90);
}