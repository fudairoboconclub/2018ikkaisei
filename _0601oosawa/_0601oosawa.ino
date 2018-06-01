 int led=13;
 int tm=250;
 void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(led,HIGH);
  delay(tm);
  digitalWrite(led,LOW);
  delay(tm);
  tm-=50;
  // put your main code here, to run repeatedly:

}
