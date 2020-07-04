/*
  *-----TX------TRANSMITER ------*
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

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

const int pinA0 = A0;//muñeca
const int pinA1 = A1;//pinza
const int pinA2 = A2;//homb
const int pinA3 = A3;//codo
const int pinA4 = A4;//base

RF24 radio(7, 8); // CE, CSN
const byte addresses[6] = "00001";
void setup() {

  radio.begin();
  radio.openWritingPipe(addresses); 
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}
void loop() {
  delay(5);
  msg.mun = map(analogRead (pinA0), 100, 900, 5, 175);
  msg.pin = map(analogRead (pinA1), 100, 900, 5, 175);
  msg.hom = map(analogRead (pinA2), 100, 900, 5, 175);
  msg.cod = map(analogRead (pinA3), 100, 900, 5, 175);
  msg.bas = map(analogRead (pinA4), 100, 900, 5, 175);

  radio.write(&msg, sizeof(msg));
}
