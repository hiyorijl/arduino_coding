// LES FALTA LOS BTONOES EL CODIGO DEL PDF (EL CODIGO EN ESTE DOCUMENTO) ES DIFERENTE AL VÍDEO (QUE INCLUYE BOTON PIN 2)
/* Programa de encendido de leds DerechaSimple
 Realiza el encendido de los diez leds de la rutina Derecha,
 y en cuyo código se escribe con sentencias simples */
// Variables
int led[] = {4,5,6,7,8,9,10,11,12,13};
int tiempoRet = 400;
// Función setup
void setup ()
{
 pinMode (led[0],OUTPUT);
 pinMode (led[1],OUTPUT);
 pinMode (led[2],OUTPUT);
 pinMode (led[3],OUTPUT);
 pinMode (led[4],OUTPUT);
 pinMode (led[5],OUTPUT);
 pinMode (led[6],OUTPUT);
 pinMode (led[7],OUTPUT);
 pinMode (led[8],OUTPUT);
 pinMode (led[9],OUTPUT);
}
// Función loop
void loop ()
{
 digitalWrite (led[0],HIGH);
 digitalWrite (led[8],HIGH);
 digitalWrite (led[6],HIGH);
 delay (tiempoRet);
 digitalWrite (led[0],LOW);
 digitalWrite (led[8],LOW);
 digitalWrite (led[6],LOW);
 digitalWrite (led[1],HIGH);
 digitalWrite (led[9],HIGH);
 digitalWrite (led[5],HIGH);
 delay (tiempoRet);
 digitalWrite (led[1],LOW);
 digitalWrite (led[9],LOW);
 digitalWrite (led[5],LOW);
 digitalWrite (led[2],HIGH);
 digitalWrite (led[3],HIGH);
 digitalWrite (led[4],HIGH);
 delay (tiempoRet);

 digitalWrite (led[2],LOW);
 digitalWrite (led[3],LOW);
 digitalWrite (led[4],LOW);
 delay (tiempoRet);
}