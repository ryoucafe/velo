void annul() {
  if (key != 'A') return;
  pad = "";
  lcd.setCursor(0, 1);
  lcd.println("                 ");
}

void verif() {
  if (key != 'B' && key!= 'E') return;  //E KEY = DEBUG MODE
    
  if (code == pad || key == 'E') {
    motor.write(0);
    Correct_Screen();
    delay(time);
    code = " ";
    default_Screen();
    pad = "";
  }
  else {

    Incorrect_Screen();
    delay(time);
    default_Screen();
    pad = "";

  }

}

void backspace() {
  
  key = keypad.getKey();
  if (key != 'F') return;

  if  (index > 0) {

  index--;
  pad.remove(index, 1); 
  lcd.setCursor(6, 1);
  lcd.print("               ");
  Serial.println(pad);
  lcd.setCursor(6, 1);
  lcd.print(pad);

  }
}
