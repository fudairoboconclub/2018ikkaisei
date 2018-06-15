int analogpin=A1;
int led=10;
int R;
int Rread(){
  R=analogRead(analogpin);
  return R;
  }

void setup() {
  Serial.begin(9600);
 
  
  // put your setup code here, to run once:

}

void loop() {
   Rread();
  Serial.println(R);Serial.println("R :");
  delay(1000);
  // put your main code here, to run repeatedly:

}
