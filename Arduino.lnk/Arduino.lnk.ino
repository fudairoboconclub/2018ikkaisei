int ft;
float ctemp(int ft){
return(5.0/9.0*(ft-32.0));
}


void setup() {
  Serial.begin(9600);
  int    f;
  float  c;
  for(int f=0; f<100; f+=10){
    c = ctemp(float(f));
    Serial.print(f);Serial.print("F :");
    Serial.print(c);Serial.println("C");
    delay(1000);
   
  }
  
 

}

void loop() {
  
 

}
