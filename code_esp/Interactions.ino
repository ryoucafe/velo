void annul() {
  if (key != 'A') return;
  pad = "";
  index = 0;
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
    index = 0;
  }
  else {

    Incorrect_Screen();
    delay(time);
    default_Screen();
    pad = "";
    index = 0;

  }

}

void backspace() {
  
  if (key != 'F') return;

  if  (index > 0) {

  index--;
  pad.remove(index, 1); 
  lcd.setCursor(6, 1);
  lcd.print("               ");
  lcd.setCursor(6, 1);
  lcd.print(pad);

  }
}
