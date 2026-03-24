void keyP() {
  key = keypad.getKey();
  if (key < '0' || key > '9') return;
  lcd.setCursor(0, 1);
  pad += key;
  Serial.println(pad);
  lcd.print(pad);
}