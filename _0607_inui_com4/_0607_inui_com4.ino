int led=13;
int pin1=12;
int state=0;
void setup() {
  pinMode(pin1,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop() {
  int sw=0;
  sw=digitalRead(pin1);

  if(sw==LOW){
    state++;
    }
  
  if(state==1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    }

}
