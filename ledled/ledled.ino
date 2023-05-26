

int led=9;
int pinBoton=2;
int estado;


void setup() {
  pinMode(led, OUTPUT);
  pinMode(pinBoton, INPUT);
}

void loop() {
  estado=digitalRead(pinBoton);

  if (estado==0) {
    digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level).
    delay(1000);
  }
  else {
    digitalWrite(9, HIGH);
    delay(1000);
    }
}
