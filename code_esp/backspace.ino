//TO FIX, DOESNT WORK
void backspace() {
  
  key = keypad.getKey();
  if (key != 'F') return;
  lcd.setCursor(0, 1);
  pad.remove(index, 1); 
  Serial.println(pad);
  lcd.print(pad);
}