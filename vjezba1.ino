void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) and digitalRead(3)){
    digitalWrite(4, HIGH);
  }
  else{
    digitalWrite(4, LOW);
  }

}
