#define FAN 9
int readByte = 0;

void setup() {
  Serial.begin(9600);
//  pinMode(FAN, OUTPUT);
}

void loop() {
   if(Serial.available() > 0){
        readByte = Serial.read();
//        Serial.println(readByte, DEC);
        analogWrite(FAN, readByte);
   }
}
