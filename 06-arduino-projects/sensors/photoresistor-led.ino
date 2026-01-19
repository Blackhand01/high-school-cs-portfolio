// https://www.youtube.com/watch?v=ZEygo6f_70Q

int limite=60;
int luce1;
int luce2;
int luci;

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  luce1 = analogRead(A1);
  luce2 = analogRead(A4);
  luci=(luce1+luce2)/2;
  if(luci<limite)
  {
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(8,LOW);
  }

  
  Serial.print("LUCE1: ");
  Serial.println(luce1);
  Serial.print("LUCE2: ");
  Serial.println(luce2);
  Serial.print("Media delle luci: ");
  Serial.println(luci);
  Serial.println(" " );
  
  delay(2000);
}
