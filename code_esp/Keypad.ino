void keyP() {
  char key = keypad.getKey();
  if (!key) return;
  lcd.setCursor(col, 1);
  Serial.println(key);
  lcd.print(key);

}