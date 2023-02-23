void ContinousCo2leveling(int delayuntilread) {
  float c = czr.CO2();
  //ScreenConfigco2lvl(4, 500, c / 1000, '%');
  if ((c > 0) && (c < 4000)) { //Between 0-4%, open valve for 95ms, wait 7.5seconds
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(95);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(7500);
    //delay(delayuntilread);
  }
  if ((c > 4001) && (c < 4500)) { //Between 4.001-4.5%, open valve for 75ms, wait 15 seconds
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(75);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(15000);
    //delay(delayuntilread);
  }
  if ((c > 4501) && (c < 4800)) { //Between 4.501-4.8%, open valve for 50ms, wait 17.5 seconds
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(50);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(17500);
    //delay(delayuntilread);
  }
  if ((c > 4801) && (c < 5000)) { //Between 4.801-5%, open valve for 25ms, wait 20 seconds
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(25);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(20000);
    //delay(delayuntilread);
  }
  if ((c > 5001) && (c < 5050)) { //Between 5.001-5.05%, open valve for 13ms, wait 25 seconds
    float c = czr.CO2();
    //ScreenConfigco2lvl(4, 500, c / 1000, '%');
    digitalWrite(Relay, HIGH);  //set solenoid to open
    delay(13);
    digitalWrite(Relay, LOW);  //set solenoid to closed
    delaydisplay(25000);
    //delay(delayuntilread);
  }
  if (c > 5051) { // Above 5.051%, Indicate full C02 level, do not fill more
    float c = czr.CO2();
    ScreenConfigtextco2(2, 1000, "CO2 FULL", c / 1000, "%");
  }
}