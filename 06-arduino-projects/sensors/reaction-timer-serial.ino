/*
Cronometro dei riflessi
ogni volta che il led si accende schiaccia il pulsante e scopri quanto sei stato veloce attraverso il monitor seriale
 */
int tempo = 200;   //varaibili globali
int pinLed = 8;
int buttonPin = 2;

int a;    

void setup(){
  pinMode(pinLed,OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);    //inizializza i comandi del monitor seriale a 9600 baud
}

void loop(){
  delay(random(5000,10000));   //il led si accende random tra i 5 e i 10 secondi
  digitalWrite(pinLed,HIGH);   //led si accende
  a=0;                                    //variabile a inizializzata a zero
  while(digitalRead(buttonPin)==LOW){   //finchè il pulsante è spento
  a++;                                  //a aumenta di 1
  delay(1);                             //oggi 1 millisecondo
  }
  Serial.print("Hai aspettato");       //stampa le seguenti frasi e il valore della variabile
  Serial.print(a);
  Serial.print("millisecondi");
  Serial.println(".");
  digitalWrite(pinLed,LOW);          //spegne il led
  
}
