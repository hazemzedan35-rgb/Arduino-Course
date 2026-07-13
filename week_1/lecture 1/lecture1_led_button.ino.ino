void setup(){
  pinMode(10,OUTPUT);
  pinMode(7,INPUT_PULLUP);
}

void loop(){
  if (digitalRead(7) ==0){
    digitalWrite(10,1);
  }
  else {
    digitalWrite(10,0);
  }
}
