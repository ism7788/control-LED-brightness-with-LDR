int LED=8;
int LDR=A1;
int VALUE;
void setup() {
  Serial.begin(9600);
 pinMode(LED,OUTPUT);
 pinMode(LDR,INPUT);

}

void loop() {
  VALUE=analogRead(A1);
  Serial.println(VALUE);
  delay(200);
  if(VALUE<=400)
  {
    digitalWrite(LED,HIGH);
    delay(2000);
    
  }
  else
  {
  digitalWrite(LED,LOW);
  delay(2000);
  }

}
