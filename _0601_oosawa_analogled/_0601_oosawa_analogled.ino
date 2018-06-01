#define MAX 255
int ledPin=11;
int value=MAX;
int dir=1;
void setup() {
  pinMode(ledPin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(ledPin,value);
  delay(400/51);

  if(value<=0)
    dir=0;
  if(value>=MAX)
    dir=1;

  if(dir==0)
   value+=1;
  else
   value-=1; 
   
  
 
  // put your main code here, to run repeatedly:

}
