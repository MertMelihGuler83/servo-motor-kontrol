#include <Servo.h>

Servo myServo; // Servo nesnesi oluşturuluyor

void setup() {
  myServo.attach(9); // Servo motor 9 numaralı pine bağlanıyor
}

void loop() {
  myServo.write(0);   // 0 dereceye dön
  delay(1000);        // 1 saniye bekle
  myServo.write(90);  // 90 dereceye dön
  delay(1000);        // 1 saniye bekle
  myServo.write(180); // 180 dereceye dön
  delay(1000);        // 1 saniye bekle
}
