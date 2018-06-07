int led=13;
int swpin=12;

void setup() {
  pinMode(swpin,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int sw=0;
 sw=digitalRead(swpin);
 if(sw==HIGH)
  digitalWrite(led,HIGH);
 else 
  digitalWrite(led,LOW);
  
  // put your main code here, to run repeatedly:

}
