#include "funciones.h"

void setup() {
  lc.shutdown(0,false); /*0 es addres*/
  lc.setIntensity(0,4); /*brillo de 1 a 15*/
  lc.clearDisplay(0);/* and clear the display */
}
void loop() {
  
  displayMatrizRandom(lc,100);
  
}
