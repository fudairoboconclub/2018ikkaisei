int analogpin=A1;//アナログ入力はANALOG INのピンを設定
int led=10;
int R;
int Rread(){
  R=analogRead(analogpin);
  return R;
  }
int I;
int Iread1(){
  if((R>=0)&&(R<=341)){
  analogWrite(led,85);
  Serial.println("I1");
  }
}
int Iread2(){
  if((R>=341)&&(R<=682)){
  analogWrite(led,170);
  Serial.println("I2");
  }
}
int Iread3(){
  if((R>=682)&&(R<=1023)){
  analogWrite(led,255);
  Serial.println("I3");
  }
}

void setup() {
  Serial.begin(9600);
 
  
  // put your setup code here, to run once:

}

void loop() {
   Rread();

 Iread1();

 Iread2();

 Iread3();

 delay(1000);

  
  // put your main code here, to run repeatedly:

}
