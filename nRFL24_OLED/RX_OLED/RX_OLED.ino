/*
  *-----RX-------RECIVER OLED 128x64---------*
  * Arduino   OLED
  *   VDD     5v
  *   SCK     A5
  *   SDA     A4
  *   GND     GND
  *------------------------------------------*
  * Arduino   NFR24
  *   7       CE
  *   8       CSN
  *   13      SCK
  *   11      MO
  *   12      MI
  *   GND     GND
  *------------------------------------------*   
*/
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
#define NUMFLAKES 10

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

char x;

RF24 radio(7, 8); // CE, CSN
const byte address[6] = "00001";

void setup() {

  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  display.clearDisplay();
  display.setTextColor(WHITE);
  
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.println("EN ESPERA.");
  display.display();

}
void loop() {
  delay(5);
  if ( radio.available()){
    while (radio.available()){
      radio.read(&x, sizeof(x));
	   display.clearDisplay();
      display.setTextSize(3);
      display.setCursor(0, 0);
      display.println(x);
      display.display();
    }
    delay(5);
  }
}
