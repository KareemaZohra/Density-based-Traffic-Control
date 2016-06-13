int x=0;
int count=0;
int T=900;
int C=1;
void setup()
{
Serial.begin(9600);
pinMode(13,OUTPUT);//green
pinMode(12,OUTPUT);//yellow
pinMode(11,OUTPUT);//red
pinMode(7,OUTPUT);//green
pinMode(6,OUTPUT);//yellow
pinMode(5,OUTPUT);//red
pinMode(A0,INPUT);
pinMode(A1,INPUT);
}
void loop()
{
  
//digitalWrite(10,HIGH);
Serial.println(analogRead(A1));
delay(100);
int first=analogRead(A0);
int second=analogRead(A1);

if(first>T && first>second)
{
count++;
digitalWrite(13,HIGH);
digitalWrite(5,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
}
else if(second>T && first<second)
{
count++;
digitalWrite(7,HIGH);
digitalWrite(11,HIGH);
delay(5000);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
}
else
{
digitalWrite(13,HIGH);
delay(300);
digitalWrite(13,LOW);

digitalWrite(5,HIGH);
delay(300);
digitalWrite(5,LOW);

digitalWrite(12,HIGH);
delay(300);
digitalWrite(12,LOW);

digitalWrite(6,HIGH);
delay(300);
digitalWrite(6,LOW);

digitalWrite(11,HIGH);
delay(300);
digitalWrite(11,LOW);

digitalWrite(7,HIGH);
delay(300);
digitalWrite(7,LOW);
}

}

