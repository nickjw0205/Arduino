void setup() {
  Serial.begin(9600);

}

void loop() {
  char c = Serial.read();
  if(c == 'r'){
    Serial.println("hello,student!");
  }

}
