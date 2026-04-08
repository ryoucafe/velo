void keyP() {
  if (key < '0' || key > '9' || padIndex > nchar-1) return;
  lcd.setCursor(6, 1);
  pad += key;
  padIndex = pad.length();
  lcd.print(pad);
}