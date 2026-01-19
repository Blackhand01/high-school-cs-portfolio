int potenziometro; 
float valore;   //variabile con la virgola

void setup() {
  Serial.begin(9600);
}

void loop() {
  potenziometro=analogRead(A0);
  Serial.println(potenziometro);
  valore=potenziometro;
  valore=valore/1023;
  valore=valore*255;
  
  analogWrite(9,valore);
  delay(180);
}
