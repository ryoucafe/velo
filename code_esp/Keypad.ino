void keyP() {
  char key = keypad.getKey();
  if (!key) return;
  lcd.setCursor(0, 1);

}