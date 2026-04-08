void annul() {
  if (key != 'A') return;
  pad = "";
  padIndex = 0;
  lcd.setCursor(0, 1);
  lcd.println("                 ");
}

void verif() {
  if (key != 'B' && key!= 'E') return;  //E KEY = DEBUG MODE
    
  if (code == pad || key == 'E') {
    motor.write(0);
    Correct_Screen();
    delay(delayMs);
    code = " ";
    default_Screen();
    pad = "";
    padIndex = 0;
  }
  else {

    Incorrect_Screen();
    delay(delayMs);
    default_Screen();
    pad = "";
    padIndex = 0;

  }

}

void backspace() {
  
  if (key != 'F') return;

  if  (padIndex > 0) {

  padIndex--;
  pad.remove(padIndex, 1); 
  lcd.setCursor(6, 1);
  lcd.print("               ");
  lcd.setCursor(6, 1);
  lcd.print(pad);

  }
}
