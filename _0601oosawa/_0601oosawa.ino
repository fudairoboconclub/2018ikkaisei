 #define MAX 500
 int led=13;
 int tm=MAX;
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
 
  
  
  if(tm<=0)
    dir=0;
  if(tm>MAX)
    dir=1;

  if(dir==0)
   tm+=50;
  else
   tm-=50; 
 
 
  
  // put your main code here, to run repeatedly:

}
