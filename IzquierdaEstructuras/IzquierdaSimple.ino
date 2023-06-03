// Programa derecha_flecha_LEDs_estructura encendido de LEDs
// Realiza el encendido de 10 LEDS hacia la derecha (forma de flecha)

// Variables
int bot = 3;
int led[] = {4,5,6,7,8,9,10,11,12,13};
int numLeds = 10;
int tiempoRet = 400;
int estePin;
int cuenta_izq = 0;
bool bot_izq = HIGH; // ‼️ ORIGINAL WITH BUTTON IS LOW

// función setup : number of LEDs
void setup() {
  pinMode(bot, INPUT);
  for (estePin = 0; estePin < numLeds; estePin++){
    pinMode(led[estePin], OUTPUT);
  }
}

//  función loop
void loop(){
  bot_izq = digitalRead (bot);
  if (bot_izq == LOW){ // ‼️ ORIGINAL WITH BUTTON IS HIGH
    switch (cuenta_izq){
      case 0:
        digitalWrite(led[2], HIGH);
        digitalWrite(led[9], HIGH);
        digitalWrite(led[4], HIGH);
        break;
      case 1:
        digitalWrite(led[1], HIGH);
        digitalWrite(led[8], HIGH);
        digitalWrite(led[5], HIGH);
        break;
      case 2:
        digitalWrite(led[0], HIGH);
        digitalWrite(led[7], HIGH);
        digitalWrite(led[6], HIGH);
        break;
      default:
      ;      
    }
    delay (tiempoRet);
    cuenta_izq++;
    if (cuenta_izq > 3){
      cuenta_izq = 0;
    }
    for (estePin = 0; estePin < numLeds; estePin++){
      digitalWrite (led[estePin], LOW);
    }
  }
}