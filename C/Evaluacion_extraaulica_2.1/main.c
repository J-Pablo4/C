#include <stdio.h>
#include "Binary.h"
#define Espacio printf(" ");
#define Salto printf("\n");
enum Numeros{HEX='a', OCT, BIN};
int main()
{
  // Representación númerica
  unsigned char option;
  unsigned int number;
  do
  {
  printf("Menu");
  Salto
  printf("a) Show hexadecimal");
  Salto
  printf("b) Show octal");
  Salto
  printf("c) Show binary");
  Salto
  printf("d) Exit");
  Salto
  printf("Option:");
  Espacio
  fflush(stdin);
  scanf("%c", &option);
  Salto
switch (option)
        {
            case HEX:
                printf("Number:");
                Espacio
                fflush(stdin);
                scanf("%d", &number);
                ShowHex(number);
                Salto
                break;
            case OCT:
                printf("Number:");
                Espacio
                fflush(stdin);
                scanf("%d", &number);
                ShowOct(number);
                Salto
                break;
            case BIN:
                printf("Number:");
                Espacio
                fflush(stdin);
                scanf("%d", &number);
                Salto
                int contador=0;
                int modulo=0;
                int sp=0;
                int st=0;
                ShowBin(number,contador, modulo,sp, st);
                Salto
                break;
        }

  } while (option != 'd');
  printf("Programs Ends");
  return 0;
} 
