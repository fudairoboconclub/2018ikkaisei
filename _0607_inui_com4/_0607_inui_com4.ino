int led=13;
int pin1=12;
void setup() {
  pinMode(pin1,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop() {
  int sw=0;
  sw=digitalRead(pin1);
  if(sw==HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    }

}
