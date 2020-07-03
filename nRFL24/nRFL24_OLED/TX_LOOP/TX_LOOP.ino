/*
  *-----TX------TRANSMITER LOOP------*
  * Arduino   NFR24
  *   7       CE
  *   8       CSN
  *   13      SCK
  *   11      MO
  *   12      MI
  *   GND     GND
*/
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
char x;

RF24 radio(7, 8); // CE, CSN
const byte addresses[6] = "00001";
int t=1000;
void setup() {
  radio.begin();
  radio.openWritingPipe(addresses); 
  radio.setPALevel(RF24_PA_MAX); //Maxima potencia
  radio.stopListening();
}
void loop() {
  x='A';
  radio.write(&x, sizeof(x));
  delay(t);
  x='B';
  radio.write(&x, sizeof(x));
  delay(t);
  x='C';
  radio.write(&x, sizeof(x));
  delay(t);
}