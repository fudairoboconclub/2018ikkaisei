float hensu=0;
int dir=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(10,hensu*255);
   delay(20);
   
   if(dir==0){
     hensu+=0.01;
   }
   if(dir==1){
      hensu-=0.01;
    }
 
   if(hensu>=1){
      dir=1;  
      hensu=1;
   }
   if(hensu<=0){
      dir=0;
      hensu=0;
    }

    
}
