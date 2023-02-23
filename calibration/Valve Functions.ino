void ContinousCo2leveling(int delayuntilread) {
  float c = czr.CO2();
  //ScreenConfigco2lvl(4, 500, c / 1000, '%');
  if ((c > 0) && (c < 4000)) {
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(95);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(7500);
    //delay(delayuntilread);
  }
  if ((c > 4001) && (c < 4500)) {
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(75);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(15000);
    //delay(delayuntilread);
  }
  if ((c > 4501) && (c < 4800)) {
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(50);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(17500);
    //delay(delayuntilread);
  }
  if ((c > 4801) && (c < 5000)) {
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(25);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(20000);
    //delay(delayuntilread);
  }
  if ((c > 5001) && (c < 5050)) {
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(13);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(25000);
    //delay(delayuntilread);
  }
  if (c > 5051) {
    float c = czr.CO2();
    ScreenConfigtextco2(2, 1000, "CO2 FULL", c / 1000, "%");
  }
}