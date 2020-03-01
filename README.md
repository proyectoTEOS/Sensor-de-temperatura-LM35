# Sensor de temperatura LM35
Obtén la temperatura del sensor con Arduino.

### Requisitos
- Tener el IDE de [Arduino](https://www.arduino.cc/en/Main/Software) (o el de tu preferencia) con la versión más actual
- Tener el material para hacer el proyecto

### Código
**[Aqui](https://github.com/proyectoTEOS/Sensor-de-temperatura-LM35-con-Arduino/blob/master/Sensor-de-temperatura-LM35-con-Arduino.ino)** podrás obtener el link del código, también dejaremos
una vista previa aquí abajo.

```c++
/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://www.proyecto-teos.com/
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

```

### Diagrama
El siguiente esquemático muestra como se debe conectar todos los componentes con la placa.
![](https://github.com/proyectoTEOS/Sensor-de-temperatura-LM35-con-Arduino/blob/master/Sensor-de-temperatura-LM35-con-Arduino.jpg)
