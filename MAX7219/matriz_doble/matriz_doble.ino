/*
- RED - VCC - 5.0V
- BLACK - GND - GND
- DIN - MOSI - 11
- LOAD - CE0 - 10
- CLK - SCLK -13
*/
#include "LedControl.h"
LedControl lc=LedControl(11,13,10,2);  //DNI, SCKL, CEO, cantidad de Matrices.

void linalDisplay(LedControl lc, int t);

void setup() {
  lc.shutdown(0,false); /*0 es addres*/
  lc.setIntensity(0,4); /*brillo de 1 a 15*/
  lc.clearDisplay(0);/* and clear the display */

  lc.shutdown(1,false); /*1 es addres*/
  lc.setIntensity(1,7); /*brillo de 1 a 15*/
  lc.clearDisplay(1);/* and clear the display */

}
void loop() {
  linalDisplay(lc,20);
}

void linalDisplay(LedControl lc, int t){
  
  //******** Primer matriz ***********
  
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
       lc.setLed(0,i,j,true);
       delay(t);
       lc.setLed(0,i,j,false);
    }
  } 

  for(int i=7;i>=0;i--){
    for(int j=7;j>=0;j--){
       lc.setLed(0,i,j,true);
       delay(t);
       lc.setLed(0,i,j,false);
    }
  } 
  //******** Segunda matriz ***********
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
       lc.setLed(1,i,j,true);
       delay(t);
       lc.setLed(1,i,j,false);
    }
  } 

  for(int i=7;i>=0;i--){
    for(int j=7;j>=0;j--){
       lc.setLed(1,i,j,true);
       delay(t);
       lc.setLed(1,i,j,false);
    }
  } 
}
