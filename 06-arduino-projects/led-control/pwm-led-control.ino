//https://www.youtube.com/watch?v=JE6kOgFGQbA

int pinLed=6;

void setup() {
  pinMode(pinLed,OUTPUT);

}

void loop() {
  for(int i=0;i<=255;i++){     //effetto luci di natale accensione graduale
  analogWrite(pinLed,i);       // valori da 0 a 255 
  delay (30);
  }
  {
  for(int i=0;i>=255;i--){     //effetto luci di natale spegnimento graduale
  analogWrite(pinLed,i);
  delay (30);
    }
  }
}
