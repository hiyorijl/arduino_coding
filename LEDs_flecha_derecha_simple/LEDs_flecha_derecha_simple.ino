// Programa derecha_Simple encendido de LEDs
// Realiza el encendido de 10 LEDS hacia la derecha (forma de flecha)

// Variables
int led[] = {3,4,5,6,7,8,9,10,11,12,13};
int tiempoRet = 400;

// Función setup: numbers of LEDs
void setup(){
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
  pinMode(led[5], OUTPUT);
  pinMode(led[6], OUTPUT);
  pinMode(led[7], OUTPUT);
  pinMode(led[8], OUTPUT);
  pinMode(led[9], OUTPUT);  
  pinMode(led[10], OUTPUT);  
}

// Función loop: indicates active LEDs
void loop(){
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], HIGH);
  digitalWrite(led[4], HIGH);
  delay(tiempoRet);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], LOW);
  digitalWrite(led[4], LOW);
  digitalWrite(led[5], HIGH);
  digitalWrite(led[6], HIGH);
  digitalWrite(led[7], HIGH);
  delay(tiempoRet);
  digitalWrite(led[5], LOW);
  digitalWrite(led[6], LOW);
  digitalWrite(led[7], LOW);
  digitalWrite(led[8], HIGH);
  digitalWrite(led[9], HIGH);
  digitalWrite(led[10], HIGH);
  delay(tiempoRet);
  digitalWrite(led[8], LOW);
  digitalWrite(led[9], LOW);
  digitalWrite(led[10], LOW);
  delay(tiempoRet);
}