void verif() {
  if (key != 'B') return;
    
  if (code == pad) {
    Serial.println("Code valide");
  }
  else {
    Serial.println("Code mauvais");
    pad = "";
    lcd.setCursor(0, 1);
  }

}