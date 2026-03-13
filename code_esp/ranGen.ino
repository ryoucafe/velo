void passwordGen() {
  if (digitalRead(codeBtn) != LOW) return; //leaves function if button is not pressed
  String code;  //creates empty string var
  lcd.setCursor(7, 0);
  for (int i = 0; i<6; i++) {   
      code += random(10);
  }
  Serial.println(code);
  lcd.print(code);
  delay(500);
}