int analogpin=A1;//アナログ入力はANALOG INのピンを設定
int led=10;
int R;
int Rread(){
  R=analogRead(analogpin);//A1で可変抵抗の値を読み取る
  return R;
  }
int I;
int Iread1(){
  if((R>=0)&&(R<=341)){
  analogWrite(led,85);
  Serial.println("I1");//Rが0～341の時value＝85で光るまたシリアルモニターにI1を表示
  }
}
int Iread2(){
  if((R>=341)&&(R<=682)){
  analogWrite(led,170);
  Serial.println("I2");//Rが341～682の時value＝170で光るまたシリアルモニターにI2を表示
  }
}
int Iread3(){
  if((R>=682)&&(R<=1023)){
  analogWrite(led,255);
  Serial.println("I3");//Rが682～1023の時value＝255で光るまたシリアルモニターにI3を表示
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
