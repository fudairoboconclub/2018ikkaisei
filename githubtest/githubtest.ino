int x=200;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delay(x);
  digitalWrite(3,LOW);
  delay(x);  
}
