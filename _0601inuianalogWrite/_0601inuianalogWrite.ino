#define MAX 255
int led=13;
int dir=0;
int tm=4;
int value=MAX;
void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(led,value);
  delay((tm*1000/2)/MAX);
  
  
  if(value<=0){
    dir--;
  }
  
  if(value>=MAX){
    dir++;
  }
  
  if(dir==0){
    value+=1;
  }
  else{
    value-=1;
  }
  
  ;
  // put your main code here, to run repeatedly:

}
