/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  WEB https://www.proyecto-teos.com
*/
const uint8_t lm35PinT = A0;
float temperatureT = 0;

void setup() {
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  char* toCharT = "";
  char resultSerialT[8] = "";
  char* messageT = "%s ºC";

  temperatureT = analogRead(lm35PinT);
  temperatureT = (1.1 * temperatureT * 100.0) / 1024.0;
  dtostrf(temperatureT, 3, 1, toCharT);
  sprintf(resultSerialT, messageT  , toCharT);

  Serial.println(resultSerialT);
  delay(1000);
}
