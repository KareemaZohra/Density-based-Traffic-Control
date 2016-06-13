int var=0;
int x=0;
int y=0;
int count=0;
int T=940;
int C=1;
#define g1 13;
#define y1 12;
#define r1 11;
#define g2 7;
#define y2 6;
#define r2 5;

void setup()
{
pinMode(r1,OUTPUT);//red
pinMode(y1,OUTPUT);//yellow
pinMode(g1,OUTPUT);//green
pinMode(r2,OUTPUT);//r
pinMode(y2,OUTPUT);//y
pinMode(g2,OUTPUT);//green
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);
}

void loop()
{
int first=analogRead(A0);
int second=analogRead(A1);
int third=analogRead(A4);
int fourth=analogRead(A5);

x=(first/C);
y=(second/C);
if(first>T && first>third)
{
count++;
digitalWrite(g1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(y1,LOW);
digitalWrite(r1,LOW);
digitalWrite(y2,LOW);
digitalWrite(g2,LOW);
delay(5000);
}
else if(third>T && third>first)
{
count++;
digitalWrite(g2,HIGH);
digitalWrite(r1,HIGH);
digitalWrite(y1,LOW);
digitalWrite(g1,LOW);
digitalWrite(6,LOW);
digitalWrite(r2,LOW);
delay(5000);
}
else
{
digitalWrite(g1,HIGH);
digitalWrite(r2,HIGH);
delay(600);
digitalWrite(g1,LOW);
digitalWrite(r2,LOW);

digitalWrite(y1,HIGH);
digitalWrite(y2,HIGH);
delay(300);
digitalWrite(y1,LOW);
digitalWrite(y2,LOW);

digitalWrite(g2,HIGH);
digitalWrite(r1,HIGH);
delay(600);
digitalWrite(g2,LOW);
digitalWrite(r1,LOW);
}
}

