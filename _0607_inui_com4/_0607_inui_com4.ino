int led = 13;
int pin1 = 12;
int state = 0;
int flag = 1;
void setup() {
  pinMode(pin1, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  int sw = 0;
  sw = digitalRead(pin1);

  if (sw == LOW) { //スイッチ押されている状態検知
    if(flag==1){//スイッチ押されたこと検知
      
      if (state == 0) {
        state = 1;
      
     }
      else {
       state = 0;//state反転
   
     }
  
      flag=0;//スイッチが押されている状態を示す
    }

  }
  else{
    if(flag==0){//スイッチはなされたこと検知
      flag=1;//スイッチが離されている状態を示す
    }
  }

  if (state == 0) {
    digitalWrite(led, LOW);
  }

  if (state == 1) {
    digitalWrite(led, HIGH);
  }

}
