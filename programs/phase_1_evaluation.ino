int sensorvalue=0;
int sensorPin=A0;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorvalue=analogRead(sensorPin);
    if(analogRead(A0)>=300)
    {
      if(digitalRead(2)==HIGH&&digitalRead(3)==HIGH)
      {
        digitalWrite(11,HIGH);
      }
      else if(digitalRead(2)==HIGH||digitalRead(3)==HIGH)
      {
        digitalWrite(12,HIGH);
      }
    }
}
