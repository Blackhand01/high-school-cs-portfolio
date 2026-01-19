int limite=30;
int luce1;
int luce2;
int luci;
int buzzer=8;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  int i;
  luce1 = analogRead(A1);
  luce2 = analogRead(A4);
  luci=(luce1+luce2)/2;
  if(luci<limite)
  {
   do{
      for( i =1000; i > 0 && luci<=limite; i = i-50)
      {
        luce1 = analogRead(A1);
        luce2 = analogRead(A4);
        luci=(luce1+luce2)/2;
        tone(buzzer,1000,200);
        Serial.print("LUCE1: "); 
        Serial.println(luce1);
        Serial.print("LUCE2: ");
        Serial.println(luce2);
        Serial.print("Media delle luci: ");
        Serial.println(luci);
        Serial.println(" " );
        delay(i);
      }
      
      for( i=200; i<4000 && luci<=limite; i=i+50)
      {
        luce1 = analogRead(A1);
        luce2 = analogRead(A4);
        luci=(luce1+luce2)/2;
        tone(buzzer,1000,i);
        Serial.print("LUCE1: "); 
        Serial.println(luce1);
        Serial.print("LUCE2: ");
        Serial.println(luce2);
        Serial.print("Media delle luci: ");
        Serial.println(luci);
        Serial.println(" " );
      }
    }while(i>=4000);
  }
  else
  {
    noTone(buzzer);
  }
  //per leggere le informazioni relative al livello di luce
  Serial.print("LUCE1: "); 
  Serial.println(luce1);
  Serial.print("LUCE2: ");
  Serial.println(luce2);
  Serial.print("Media delle luci: ");
  Serial.println(luci);
  Serial.println(" " );
  delay(2000);
}
