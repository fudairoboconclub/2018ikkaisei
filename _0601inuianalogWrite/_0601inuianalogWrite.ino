#define MAX 500
int led=13;
int tm=MAX;
void setup() {
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(led,13);
  
  if(tm<=0){
    dir--;
  }
  
  if(tm>=MAX){
    dir++;
  }
  
  if(dir==0){
    tm+=50;
  }
  else{
    tm-=50;
  }
  
  ;
  // put your main code here, to run repeatedly:

}
