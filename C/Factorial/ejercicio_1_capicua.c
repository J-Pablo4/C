// Número capicúa
#include <stdio.h>

int main(void) {
  
  unsigned int X; //Num Hex que le hace input usuario
  unsigned int N; //Numero decimal para determinar cuantos bits se evaluan
  printf("Escriba un numero en hexadecimal: ");
  scanf("%X", &X);
  printf("Escriba el numero de bits que desea evaluar: ");
  scanf("%d", &N);
  unsigned int Y=N;
  unsigned int Z=N;
  int V;
  unsigned int binario[32];
  int I;
  int J;

  

  N = ~(0xfffffff<<N); 
  X = X&N;

  Y=Y-1;
  for(;X>0;)
  {
    binario[Y--]=X&1;
    X=X>>1;
  }
  

    for( I=0 , J = Z-1 ; I < Z ; I++ , J--)
    {
        if(binario[I] != binario[J])
        {
            printf("NO CAPICUA");
            break;
        }
        else
        {
            V=1;
        }
    }
    if (V==1)
    {
        printf("CAPICUA");
    }
return 0;
}