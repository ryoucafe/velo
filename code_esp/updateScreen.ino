void default_Screen() {

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Code: ");
  lcd.setCursor(6, 0);
  lcd.print(code);

}

void Incorrect_Screen() {

  lcd.clear();
  lcd.setCursor(6, 0);
  lcd.print("Code");
  lcd.setCursor(4, 1);
  lcd.print("Invalide");
  delay(1500);

}

void Correct_Screen() {

  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Code Bon");
  
}
