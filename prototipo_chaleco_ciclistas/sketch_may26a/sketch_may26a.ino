/* Programa de encendido de LEDS
Alto_simple*/

//Variables
int leds[]= {4,5,6,7,8,9,10,11,12,13};
int tiempoRet=400;

void setup(){
  for (int i = 0; i < 10; i++){
    pinMode (leds[i], OUTPUT);
  }
 // BEFORE optimization
 // pinMode(leds[0], OUTPUT);
 // pinMode(leds[1], OUTPUT);
 // pinMode(leds[2], OUTPUT);
 // pinMode(leds[3], OUTPUT);
 // pinMode(leds[4], OUTPUT);
 // pinMode(leds[5], OUTPUT);
 // pinMode(leds[6], OUTPUT);
 // pinMode(leds[7], OUTPUT);
 // pinMode(leds[8], OUTPUT);
 // pinMode(leds[9], OUTPUT);
}

void loop(){
  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], HIGH);
  }
  delay(tiempoRet);

  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], LOW);
  }
  delay(tiempoRet);
}



