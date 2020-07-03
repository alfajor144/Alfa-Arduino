/*
  *-----RX-------RECIVER Brazo Robot (4 servos)---------*
  * Arduino   NFR24
  *   7       CE
  *   8       CSN
  *   13      SCK
  *   11      MO
  *   12      MI
  *   GND     GND
*/
struct S_msg{
  int pin;
  int mun;
  int cod;
  int hom;
  int bas;
};
S_msg msg;

#include <Servo.h>
Servo servo10;
Servo servo9;
Servo servo6;
Servo servo5;
Servo servo3;

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8); // CE, CSN
const byte address[6] = "00001";

void setup() {
  
 servo10.attach (10);//pinz -- A1
 servo9.attach (9);//  muñe -- A0
 servo6.attach (6);//  codo -- A3
 servo5.attach (5);//  homb -- A2
 servo3.attach (3);//  base -- A4
  
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}
void loop() {
  delay(5);
  if ( radio.available()){
    while (radio.available()){
      radio.read(&msg, sizeof(msg));
      servo10.write(msg.pin);
      servo9.write(msg.mun);
      servo6.write(msg.cod);
      servo5.write(msg.hom);
      servo3.write(msg.bas);
    }
    delay(5);
  }
}
