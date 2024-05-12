#include <Servo.h>
int sensor = 4;//pin digital
//bahan sensor halangan, servo hitam, baterai, arduino
Servo myservo;

void setup() {
pinMode(sensor, INPUT);// put your setup code here, to run once:
myservo.attach(6);//pindigital
}

void loop() {
  while(!(digitalRead(sensor))){//tanda seru untuk mengatakan bahwa saat no maka sensor bekerja
  delay(200);
  myservo.write(0);//110 bisa diganti tergantung dia mau berputar berapa derajat untuk ngecrot sabun
  delay(2000);//agar saat tangan dilepas bisa slow jalannya
  
}
myservo.write(180);//bisa diganti sans
}
