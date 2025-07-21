

double ch1=2;
int a=4; int b=5;
 
double ch2=3;
int c=6; int d=7;

int ena=9;int enb=10;

void setup()
{
  Serial.begin(9600);
  
  pinMode(2,INPUT);
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  
  pinMode(3,INPUT);
  pinMode(6,OUTPUT); pinMode(7,OUTPUT);
  
}

void loop()
{
ch1 = pulseIn(2,HIGH);
ch2 = pulseIn(3,HIGH);


if ((ch1==0) && (ch2==0)){
  Serial.print("S");
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
}

else if ((ch2>1900) && (ch1>1450 && ch1<1510)){
  Serial.print("F");
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  analogWrite(ena,255);
  analogWrite(enb,255);
} //F

else if ((ch2<1010) && (ch1>1450 && ch1<1510)){
  Serial.print("B");
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  analogWrite(ena,255);
  analogWrite(enb,255);
} //B

else if ((ch1>1900) && (ch2>1450 && ch2<1510)){
  Serial.print("R");
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  analogWrite(ena,255);
  analogWrite(enb,255);
} //R

else if ((ch1<1010) && (ch2>1450 && ch2<1510)){
  Serial.print("L");
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  analogWrite(ena,255);
  analogWrite(enb,255);
} //L

else{
  Serial.print("S");
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
}


}


