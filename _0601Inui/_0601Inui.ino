int led=13;
int tm=250;
int dir=1;
void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(led,HIGH);
  delay(tm);
  digitalWrite(led,LOW);
  delay(tm);
  if(dir==0){
    tm+=50;
  }
  else{
    tm-=50;
  }
  ;
  // put your main code here, to run repeatedly:

}
