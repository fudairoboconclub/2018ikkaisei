int tm=100;
int dir=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,HIGH);
  delay(tm);
  digitalWrite(10,LOW);
  delay(tm);
  
  if(dir==0){
    tm+=50;
  
    if(tm>500){
      tm+=50;
      dir=1;
    }
  }
  else{
    tm-=50;
    
    if(tm<100){
      dir=0;
    } 
  }
}
