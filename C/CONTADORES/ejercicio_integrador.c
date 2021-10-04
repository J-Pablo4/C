// Número capicúa
#include <stdio.h>

int main(void) {
  unsigned int X;
  int Y = 0;
  unsigned int Total;
  unsigned int N;
  printf("Escriba un numero en hexadecimal: ");
  scanf("%X", &X);

  printf("Escriba el numero de bits que desea evaluar: ");
  scanf("%d", &N);

  N = ~(0xfffffff<<N); 
  X = X&N;

  Total = X;

//Ciclo para voltear numeros
  while (X != 0)
  {
    Y = Y * 10;
    Y = Y + X%10;
    X /= 10;
  }

  if (Total == Y)
  {
      printf("CAPICUA");
  }
  else
  {
    printf("NO CAPICUA");
  }
  return 0;
}