void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(0);
//  Serial.println(val);

  int high = pwm;
  int low = pwm*0.1;
  int data = makeWord(high, low);
  Serial.println(data);
  
  delay(100);
}
