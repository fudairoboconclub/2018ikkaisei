 
int led=11;
int pinA=9;
int value=0;
int powerA=10;
int powerB=100;
int powerC=250;
int Rread(){
  value=analogRead(pinA);
 Serial.println(value);
};

int LightPhase(){
  if(value<=270){
  analogWrite(led,powerA);
  Serial.println("powerA");
 } 
 else if(270<value&value<285){
  analogWrite(led,powerB);
   Serial.println("powerB");
 }
 else{
  analogWrite(led,powerC);
   Serial.println("powerC");
 }
 delay(100);
}

void setup() {
  Serial.begin(9600);

}

void loop() {
  Rread();
  LightPhase();

 
 
}
