/*
- RED - VCC - 5.0V
- BLACK - GND - GND

- ROJO - DIN - MOSI - 11
- BLANCO - LOAD - CE0 - 10
- NARANJA - CLK - SCLK -13
 */

//matriz grande:
//azul 13
//blanco 11
//amarillo 10

const bool  mat[][8]={{1,0,0,0,0,0,0,0},
                      {0,1,0,0,0,0,0,0},
                      {0,0,1,0,0,0,0,0},
                      {0,0,0,1,0,0,0,0},
                      {0,0,0,0,1,0,0,0},
                      {0,0,0,0,0,1,0,0},
                      {0,0,0,0,0,0,1,0},
                      {0,0,0,0,0,0,0,1}};
               
const bool mat2[][8]={{1,1,1,1,1,1,1,0},
                      {1,1,1,1,1,1,1,0},
                      {1,1,0,0,0,0,0,0},
                      {1,1,1,1,1,1,1,0},
                      {1,1,1,1,1,1,1,0},
                      {1,1,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,0}};
                
//------------------------------------------

const bool vacia[][8]={{0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0}};

const bool cero[][8]={{0,0,0,1,1,0,0,0},
                      {0,0,1,0,0,1,0,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,0,0,1,1,0},
                      {0,0,1,0,0,1,0,0},
                      {0,0,0,1,1,0,0,0}};
                
const bool uno[][8]={{0,0,0,1,1,0,0,0},
                     {0,0,1,1,1,0,0,0},
                     {0,0,0,1,1,0,0,0},
                     {0,0,0,1,1,0,0,0},
                     {0,0,0,1,1,0,0,0},
                     {0,0,0,1,1,0,0,0},
                     {0,0,0,1,1,0,0,0},
                     {0,0,0,1,1,0,0,0}};               

const bool dos[][8]={{0,0,1,1,1,1,0,0},
                     {0,1,1,0,0,1,1,0},
                     {0,1,1,0,0,1,1,0},
                     {0,0,0,0,1,1,0,0},
                     {0,0,0,1,1,0,0,0},
                     {0,0,1,1,0,0,0,0},
                     {0,1,1,1,1,1,1,0},
                     {0,1,1,1,1,1,1,0}};
                
const bool tres[][8]={{0,1,1,1,1,1,0,0},
                      {0,1,1,1,1,1,1,0},
                      {0,0,0,0,0,1,1,0},
                      {0,0,1,1,1,1,0,0},
                      {0,0,1,1,1,1,0,0},
                      {0,0,0,0,0,1,1,0},
                      {0,1,1,1,1,1,1,0},
                      {0,1,1,1,1,1,0,0}};
                 
const bool cuatro[][8]={{0,1,1,0,0,1,1,0},
                        {0,1,1,0,0,1,1,0},
                        {0,1,1,0,0,1,1,0},
                        {0,1,1,1,1,1,1,0},
                        {0,0,1,1,1,1,1,0},
                        {0,0,0,0,0,1,1,0},
                        {0,0,0,0,0,1,1,0},
                        {0,0,0,0,0,1,1,0}};
                
const bool sinco[][8]={{0,1,1,1,1,1,1,0},
                       {0,1,1,1,1,1,1,0},
                       {0,1,1,0,0,0,0,0},
                       {0,1,1,1,1,1,0,0},
                       {0,0,0,0,0,1,1,0},
                       {0,0,0,0,0,1,1,0},
                       {0,1,1,1,1,1,1,0},
                       {0,1,1,1,1,1,0,0}};
                
const bool seis[][8]={{0,0,1,1,1,1,0,0},
                      {0,1,1,0,0,0,0,0},
                      {0,1,1,0,0,0,0,0},
                      {0,1,1,1,1,1,0,0},
                      {0,1,1,1,1,1,0,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,1,1,1,1,0},
                      {0,0,1,1,1,1,0,0}};
                
const bool siete[][8]={{0,1,1,1,1,1,0,0},
                       {0,1,1,1,1,1,1,0},
                       {0,0,0,0,0,1,1,0},
                       {0,0,0,0,1,1,0,0},
                       {0,0,0,0,1,1,0,0},
                       {0,0,0,1,1,0,0,0},
                       {0,0,0,1,1,0,0,0},
                       {0,0,0,1,1,0,0,0}};
                
const bool ocho[][8]={{0,0,1,1,1,1,0,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,0,0,1,1,0},
                      {0,0,1,1,1,1,0,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,0,0,1,1,0},
                      {0,1,1,0,0,1,1,0},
                      {0,0,1,1,1,1,0,0}};
                
const bool nueve[][8]={{0,0,1,1,1,1,0,0},
                       {0,1,1,0,0,1,1,0},
                       {0,1,1,0,0,1,1,0},
                       {0,1,1,1,1,1,1,0},
                       {0,0,1,1,1,1,1,0},
                       {0,0,0,0,0,1,1,0},
                       {0,0,0,0,0,1,1,0},
                       {0,0,0,0,0,1,1,0}};   
                                                                                                                         
#include "LedControl.h"

LedControl lc=LedControl(11,13,10,1);  //DNI, SCKL, CEO, cantidad de Matrices.

void play_doble(LedControl lc, bool mat[][16]);
void play_all(LedControl lc, int t);
void play(bool mat[][8], LedControl lc);
void recorrer_mat(bool mat[][8], bool act, int intencity, LedControl lc);
void recorrer_fade(LedControl lc, int tim);
void fun_fade(LedControl lc, int p, int j, int t); 
void random_fade(LedControl lc, int t);
void invertir(bool mat_in[][8],bool mat_out[][8]);
void espejar(bool mat[][8],bool mat_esp[][8]);
void showSerial(bool matResult[][8]);
void merge(bool mat[][8], bool mat2[][8],bool matResult [][16]);
void desplazamiento(bool mat[][8], int tim);
void desplazamiento_doble(LedControl lc, bool mat[][16], int tim);
void igualar(bool matin[][8],bool matout[][8]);
void displayMatriz(int num, LedControl lc, int tim);
void displayMatrizContador(LedControl lc, int tim);
void displayMatrizRandom(LedControl lc, int tim);

//***********************************************************************
//displayMatrizRandom(lc,100);
void displayMatrizRandom(LedControl lc, int tim){
  lc.clearDisplay(0);
  displayMatriz(random(0,99),lc,tim);
  delay(200);
}
//***********************************************************************
//displayMatrizContador(LedControl lc, int tim)
void displayMatrizContador(LedControl lc, int tim){
   for(int num=0;num<100;num++){
    displayMatriz(num,lc,tim);
   }
}
//***********************************************************************
//igualar(matin,matout);
void igualar(bool matin[][8],bool matout[][8]){
  for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
         matin[i][j]=matout[i][j];
      }
    }
}
//***********************************************************************
//displayMatriz(num,lc,tim);
void displayMatriz(int num, LedControl lc, int tim){
  int p=0;  
  bool multi[8][8];
  igualar(multi,vacia);
  
  if(num<10){
    if(num==0){
      desplazamiento(cero, tim);
    }
    if(num==1){
      desplazamiento(uno, tim);
    }
    if(num==2){
      desplazamiento(dos, tim);
    }
    if(num==3){
      desplazamiento(tres, tim);
    }
    if(num==4){
      desplazamiento(cuatro, tim);
    }
    if(num==5){
      desplazamiento(sinco, tim);
    }
    if(num==6){
      desplazamiento(seis, tim);
    }
    if(num==7){
      desplazamiento(siete, tim);
    }
    if(num==8){
      desplazamiento(ocho, tim);
    }
    if(num==9){
      desplazamiento(nueve, tim);
    }
  }
  
  //----------------10-------------------
  
  if(num>9){
    
    p=10;
    igualar(multi,uno);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }

  //----------------20-------------------
  if(num>19){
    
    p=20;
    igualar(multi,dos);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------30-------------------
    if(num>29){
    
    p=30;
    igualar(multi,tres);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------40-------------------
    if(num>39){
    
    p=40;
    igualar(multi,cuatro);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------50-------------------
    if(num>49){
    
    p=50;
    igualar(multi,sinco);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------60-------------------
    if(num>59){
    
    p=60;
    igualar(multi,seis);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------70-------------------
    if(num>69){
    
    p=70;
    igualar(multi,siete);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------80-------------------
    if(num>79){
    
    p=80;
    igualar(multi,ocho);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
  //----------------90-------------------
    if(num>89){
    
    p=90;
    igualar(multi,nueve);
    
    if(num==0+p){
      bool matResult [8][16];
      merge(multi, cero, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==1+p){
      bool matResult [8][16];
      merge(multi, uno, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==2+p){
      bool matResult [8][16];
      merge(multi, dos, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==3+p){
      bool matResult [8][16];
      merge(multi, tres, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==4+p){
      bool matResult [8][16];
      merge(multi, cuatro, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==5+p){
      bool matResult [8][16];
      merge(multi, sinco, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==6+p){
      bool matResult [8][16];
      merge(multi, seis, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==7+p){
      bool matResult [8][16];
      merge(multi, siete, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==8+p){
      bool matResult [8][16];
      merge(multi, ocho, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
    if(num==9+p){
      bool matResult [8][16];
      merge(multi, nueve, matResult);
      desplazamiento_doble(lc,matResult,tim);
    }
  }
}
//***********************************************************************
//play all numbers
//play_all(lc,500);
void play_all(LedControl lc, int t){
  play(uno,lc);
  delay(t);
  play(dos,lc);
  delay(t);
  play(tres,lc);
  delay(t);
  play(cuatro,lc);
  delay(t);
  play(sinco,lc);
  delay(t);
  play(seis,lc);
  delay(t);
  play(siete,lc);
  delay(t);
  play(ocho,lc);
  delay(t);
  play(nueve,lc);
  delay(t);
}
//***********************************************************************
//un play sensillo
//play(mat,lc);
void play(bool mat[][8], LedControl lc){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
       if(mat[i][j]==true){
          lc.setLed(0,i,j,true);
       }
    }
  }
}

//***********************************************************************
//toma dos matrices de 8x8 y devuelve una de 8x16
// bool matResult [8][16];
//merge(mat, mat2, matResult);

void merge(bool mat[][8], bool mat2[][8],bool matResult [][16]){
  for(int i=0; i<8;i++){
      for(int j=0; j<16;j++){
        if(j<9){
            matResult[i][j]=mat[i][j];
        }
        if(j>8){
           matResult[i][j]=mat2[i-1][j];
       }
    }
  }
  matResult[7][8]=0;
}
//***********************************************************************
//desplaza una matriz de 8x16
//desplazamiento_doble(lc,mat,100);

void desplazamiento_doble(LedControl lc, bool mat[][16], int tim){
  for(int p=-8;p<16;p++){
    for(int i=-8;i<16;i++){
      for(int j=0;j<16;j++){
         if(mat[i][j]==true){
            lc.setLed(0,i,j-p,true);
         }
      }
    }
    delay(tim);
    lc.clearDisplay(0);
  }
}
//***********************************************************************
//desplaza una matriz de 8x8
//desplazamiento(mat,tim);

void desplazamiento(bool mat[][8], int tim){
  for(int p=8; p>=-8;p--){
    for(int i=0; i<8;i++){
      for(int j=0; j<8;j++){
        if(mat[i][j]==true){
          lc.setLed(0,i,j+p,true);
        }
      }
    }
    delay(tim);
    lc.clearDisplay(0);
  }
}
//***********************************************************************
//showSerial(mat2);
//imprime la matris por puerto serie
void showSerial(bool matResult[][8]){
  for(int i=0; i<8;i++){
      for(int j=0; j<8;j++){
        if(matResult[i][j]==true){
          Serial.print("1 ");
        }
        else{
          Serial.print("0 ");
        }
      }
      Serial.println("");
    }
    Serial.println("\n");
    delay(1000);
}

//***********************************************************************
//recive dos matrices (mat) y (mat_esp), llena mat_esp con el espejo de mat
//       bool mat_esp[8][8];
// espejar(mat,mat_esp);

void espejar(bool mat[][8],bool mat_esp[][8]){
  bool arr[8];
  int fin=7;
  int start=0;
  for(int i=0; i<8;i++){
    for(int j=0; j<8;j++){
      arr[j]=mat[i][j];
    }
     while (start < fin){ 
        bool temp = arr[start];  
        arr[start] = arr[fin]; 
        arr[fin] = temp; 
        start++; 
        fin--; 
    } 
    fin=7;
    start=0; 
    for(int q=8; q>=0;q--){
      mat_esp[q][i]=arr[q];
    }
  }
}

//***********************************************************************
//recive dos matrices (mat_in) y (mat_out), llena mat_out con la inversa de mat_in
//       bool mat_out[8][8];
// invertir(mat_in,mat_out);
void invertir(bool mat_in[][8],bool mat_out[][8]){
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(mat_in[i][j]==true){
        mat_out[i][j]=false;
      }else{
        mat_out[i][j]=true;
      }
    }
  } 
}
//***********************************************************************
//imprime la matriz en off, en fade in y en fade out

//          objeto, delay, matriz8x8
//recorrer_fade(lc,10, mat);     
    
void recorrer_fade(LedControl lc, int tim, bool mat[][8]){
  recorrer_mat(mat, false, 0, lc);
  delay(500);
  for(int i=0;i<16;i++){
    recorrer_mat(mat, true, i, lc);
    delay(tim);
  }
  for(int i=16;i>=0;i--){
    recorrer_mat(mat, true, i, lc);
    delay(tim);
  }
}

//***********************************************************************
//si act es true, la matriz se ensiende,
//si es false se apaga

//          matriz,ensender?,intensidad,objeto
//recorrer_mat(mat,true,15,lc);

void recorrer_mat(bool mat[][8], bool act, int intencity, LedControl lc){
  lc.setIntensity(0,intencity);
  
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(mat[i][j]==true){
        lc.setLed(0,i,j,act);
      }
    }
  } 
}

//***********************************************************************
//fade in, fade out de un led

//        ojeto,x,y,delay
//fun_fade(lc,0,0,20);

void fun_fade(LedControl lc, int p, int j, int t){
  for(int i=0;i<15;i++){
    lc.setIntensity(0,i);
    lc.setLed(0,p,j,true);
    delay(t);
  }
  
  for(int i=15;i>=0;i--){
    lc.setIntensity(0,i);
    lc.setLed(0,p,j,true);
    delay(t);
  }
}

//***********************************************************************
//fade in, fade out de un led en pos random

//         ojeto,delay
//random_fade(lc,20);       
    
void random_fade(LedControl lc, int t){
  int p=random(0,8);
  int j=random(0,8);
  fun_fade(lc,p,j,t);
  lc.clearDisplay(0);
  delay(t);
}
//***********************************************************************
