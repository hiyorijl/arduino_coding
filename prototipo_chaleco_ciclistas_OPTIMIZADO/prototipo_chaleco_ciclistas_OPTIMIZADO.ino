// Programa de encendido de LEDS: Alto_simple
// Con Estructuras de control (OPTIMIZADO) || Don't Repeat Yourself (DRY)

// Funcionalidad
// Prende y apaga 10 LEDS que esten conectados desde el puerto 4 hasta el 13
// Se apaga por 0.4 segundos vuelve a prender


// VARIABLES
int bot = 2;
int led [] = {4,5,6,7,8,9,10,11,12,13};
int numLeds = 10;
int tiempoRet = 400;
int estePin;

void setup(){
  pinMode(bot, INPUT);

  for (estePin = 0; estePin < numLeds; estePin++){
    pinMode(led[estePin], OUTPUT);
  }
}

void loop(){
  boolean bot_alto = digitalRead(bot);

  if(bot_alto){
    for(estePin = 0; estePin < numLeds ; estePin++){
      digitalWrite(led[estePin], HIGH);
    }
    delay(tiempoRet)

    for(estePin = 0 ; estePin < numLeds ; estePin++){
      digitalWrite(led[estePin], LOW);
    }
    delay(tiempoRet);
  }
}