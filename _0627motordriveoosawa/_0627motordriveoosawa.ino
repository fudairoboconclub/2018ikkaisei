int in1=13;
int in2=12;
int in3=11;
int in4=7;
int in5=6;
int in6=5;

int Mbreake1(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in5,LOW);
  digitalWrite(in6,LOW);
  delay(2000);
 }//モーターにブレーキ//

 int M1move1(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  digitalWrite(in5,LOW);
  digitalWrite(in6,LOW);
  delay(2000);
 }//モーター１を回す//

 int M1move2(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in5,LOW);
  digitalWrite(in6,HIGH);
  delay(2000);
 }//モーター１を逆回転//

 int M2move1(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  digitalWrite(in5,HIGH);
  digitalWrite(in6,LOW); 
  delay(2000);
 }//モーター２を回転//

 int M2move2(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  digitalWrite(in5,HIGH);
  digitalWrite(in6,HIGH);
  delay(2000);
 }//モーター２を逆回転//

 int Mbreake2(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
  digitalWrite(in5,HIGH);
  digitalWrite(in6,HIGH);
  delay(2000);
 }//モーターにブレーキ//



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
 M1move1();
 M1move2();
 M2move1();
 M2move2();
 Mbreake2();
 

  
  // put your main code here, to run repeatedly:

}
