float hensu=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(10,hensu*255);
   delay(20);
   hensu+=0.01;

   if(hensu==1){
     hensu=0;
   }
}
