int LED = 13;
int LDR = A0;
int entrada = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
 entrada = analogRead(LDR);
  Serial.println(entrada);
  if(entrada < 100)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);
  delay(100);
}