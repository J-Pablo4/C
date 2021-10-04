#include "Binary.h"
#include <stdio.h>
void ShowHex(unsigned int hex)
{
    int temp;
    char arrayhex[8];
    for(int i=0; i <=8; i++)
    {
      temp = hex%16;
      if (temp<10 && temp>=0)
      {
        arrayhex[i] = 48 + temp;
      }
      else if (10<=temp)
      {
        arrayhex[i] = 55 + temp;
      }
      hex/=16;
    }
    printf("0x");
    int contador = 0;
    for(int i=7; i>=0; i--)
    {
      
        printf("%c", arrayhex[i]);
        contador++;
      
       if(contador == 4)
      {
        printf(" "); 
      } 
    }
}
void ShowOct(unsigned int oct)
{
    int contador=0;
    int arrayoct[12];
    for(int i =0; i<=12; i++)
    {
      arrayoct[i] = oct%8;
      oct/=8;
    }
    for(int i=11; i >=0; i--)
    {
      printf("%d", arrayoct[i]);
      contador++;
      if(contador%4== 0)
      {
        printf(" ");
      }
    }
    printf(" o");
}

void ShowBin(unsigned int bit, int contador,int modulo, int sp,int st)
{
    //caso de induccion
    if(contador!=32)
    {
      if(contador==0)
      {
        st=20;
      }
      
      else st=0;
      //Algorito propio de la funcion
      modulo= bit%2;
      contador++;
      bit /=2;

      
      if(contador%8==0 && contador!=32)
      {
        
        sp+=20;
      }
      else sp=0;
    }
    //Caso base 
    else if (contador == 32)
    {      
        return;
    }
    ShowBin(bit, contador,modulo, sp,st);
    
    if (sp>1)
    {
      printf(" ");
      sp=0;
    }
    printf("%d",modulo);
    if (st>1)
    {
      printf(" b");
      st=0;  
    }
}
