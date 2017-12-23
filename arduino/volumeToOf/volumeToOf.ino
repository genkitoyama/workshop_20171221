int value[2];

void setup(){
  Serial.begin(9600);
}

void loop(){
  value[1] = 0.8 * value[0] + 0.2 * analogRead(2);
  value[0] = value[1];
  int low = value[1] & 127;             //127(0b01111111)との論理積: 0~127
  int high = (value[1] >> 7) & 127;     //右に7つビットシフトしたものと127と論理積: 0~127
  int head = 128;                       //ヘッダを128に設定
  
  Serial.write(head);
  Serial.write(high);
  Serial.write(low);

  delay(50);

}
