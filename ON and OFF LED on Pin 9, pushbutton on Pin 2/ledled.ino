// ON and OFF LED on Pin 9, pushbutton on Pin 2

/*This code creates a simple on-off behavior for the LED. 
When the push button is pressed, the LED turns off. When the 
push button is not pressed, the LED turns on. The LED is 
connected to pin 9, and the push button is connected to pin 2.
*/

int led=9; // Pin number for the LED
int pinBoton=2; // Pin number for the push button
int estado; // Variable to store the state of the push button


void setup() {
  pinMode(led, OUTPUT); // Set the LED pin as output
  pinMode(pinBoton, INPUT); // Set the push button pin as input
}

void loop() {
  estado=digitalRead(pinBoton); // Read the state of the push button

  if (estado==0) {
    digitalWrite(9, LOW); // turn the LED on (HIGH is the voltage level).
    delay(1000);
  }
  else {
    digitalWrite(9, HIGH);
    delay(1000);
    }
}
