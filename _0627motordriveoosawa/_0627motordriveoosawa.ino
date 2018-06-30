int in1=13;
int in2=12;
int in3=11;
int in4=7;
int in5=6;
int in6=5;

int Mbreake(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in5,LOW);
  digitalWrite(in6,LOW);
  delay(1000);
 }//ブレーキ//

 int Mmove1(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(in5,LOW);
  digitalWrite(in6,LOW);
  delay(3000);
 }//後進//

 int Mmove2(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in5,LOW);
  digitalWrite(in6,HIGH);
  delay(3000);
 }//前進//



void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(in5,OUTPUT);
  pinMode(in6,OUTPUT);
  

}

void loop() {
 Mbreake1();
 Mmove1();
 Mmove2();


  
  // put your main code here, to run repeatedly:

}
