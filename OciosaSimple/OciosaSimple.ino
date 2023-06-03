// Variables 
int led[] = {4,5,6,7,8,9,10,11,12,13};
int tiempoRetociosa = 200;

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
  pinMode(led[11], OUTPUT);  
  pinMode(led[12], OUTPUT);  
  pinMode(led[13], OUTPUT);  
}

void loop(){
  digitalWrite (led[0], HIGH);
  digitalWrite (led[4], HIGH);
  delay(tiempoRetociosa);

  digitalWrite (led[0], LOW);
  digitalWrite (led[4], LOW);
  digitalWrite (led[1], HIGH);
  digitalWrite (led[7], HIGH);
  delay(tiempoRetociosa);

  digitalWrite (led[1], LOW);
  digitalWrite (led[7], LOW);
  digitalWrite (led[2], HIGH);
  digitalWrite (led[8], HIGH);  
  delay(tiempoRetociosa);

  digitalWrite (led[2], LOW);
  digitalWrite (led[8], LOW);
  digitalWrite (led[4], HIGH);
  digitalWrite (led[7], HIGH); 
  delay(tiempoRetociosa);

  digitalWrite (led[4], LOW);
  digitalWrite (led[7], LOW);
}

