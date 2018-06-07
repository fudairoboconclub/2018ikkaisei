void setup() {
  Serial.begin(9600);
 // put your setup code here, to run once:
}

void loop() {
  Serial.println((1023-analogRead(A0))/1023.0*10000.0);
    delay(1000);// put your main code here, to run repeatedly:

}
