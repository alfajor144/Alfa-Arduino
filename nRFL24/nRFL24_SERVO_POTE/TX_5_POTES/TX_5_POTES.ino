/*
  *-----TX------TRANSMITER (3 pot + 1 bot)------*
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

int A0i;//A0 input
int A1i;
int A2i;
int A3i;
int A4i;

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
  A0i = analogRead (pinA0);
  msg.mun = map(A0i, 70, 888, 5, 175);
  
  A1i = analogRead (pinA1);
  msg.pin = map(A1i, 300, 800, 5, 175);
  
  A2i = analogRead (pinA2);
  msg.hom = map(A2i, 80, 900, 5, 175);
  
  A3i = analogRead (pinA3);
  msg.cod = map(A3i, 200, 800, 5, 175);
  
  A4i = analogRead (pinA4);
  msg.bas = map(A4i, 100, 800, 5, 175);

  radio.write(&msg, sizeof(msg));
}
