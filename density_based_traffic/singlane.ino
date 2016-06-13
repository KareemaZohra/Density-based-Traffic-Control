int x=0;
int count=0;
int T=100;
int C=1;
void setup()
{
Serial.begin(9600);

pinMode(11,OUTPUT);//red
pinMode(12,OUTPUT);//yellow
pinMode(13,OUTPUT);//green
pinMode(7,OUTPUT);//green
pinMode(6,OUTPUT);//yellow
pinMode(5,OUTPUT);//red
pinMode(A0,INPUT);
}
void loop()
{
digitalWrite(10,HIGH);
Serial.println(analogRead(A0));
delay(100);
int N=analogRead(A0);
//Serial.println(N);
x=(N/C);
if(N<T)
{
count++;
digitalWrite(13,HIGH);
delay(5000);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
}
else
{
digitalWrite(13,HIGH);
delay(300);
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
delay(300);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
delay(300);
digitalWrite(11,LOW);
}


}


