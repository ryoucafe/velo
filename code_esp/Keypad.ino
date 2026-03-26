void keyP() {
  if (key < '0' || key > '9' || index > nchar-1) return;
  lcd.setCursor(6, 1);
  pad += key;
  index = pad.length();
  lcd.print(pad);
}