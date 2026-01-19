int tempo = 1000;
int pinLed = 8;
int buttonPin = 2;

void setup() {
  pinMode(pinLed,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop(){
  if(digitalRead(buttonPin)==HIGH){
     for(int i=0;i<3;i++){
       digitalWrite(pinLed,HIGH);
       delay(tempo);
       digitalWrite(pinLed,LOW);
       delay(tempo);
    }
  }
}

  

