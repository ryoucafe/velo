void keyP() {
  key = keypad.getKey();
  if (!key) return;
  lcd.setCursor(0, 1);
  pad += key;
  Serial.println(pad);
  lcd.print(pad);
}