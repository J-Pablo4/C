#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int opcion;
  float divisa;
  float divisaR;
  float Euro = 24.92;
  float Dolar = 20.90;
  printf("[1] Pesos a dolares\n");
  printf("[2] Dolares a pesos\n");
  printf("[3] Pesos a euros\n");
  printf("[4] Euros a pesos\n");
  printf("[0] Salir\n");
  
  do
  {
  printf("Escribe tu opcion: ");
  scanf("%d",&opcion);
  switch (opcion)
  {
  case 1:
      printf("Introduce Pesos: ");
      scanf("%f", &divisa);
      divisaR = divisa / Dolar;
      printf("\n%.2f pesos son %.2f dolares\n",divisa, divisaR);
      break;
  
  case 2:
      printf("Introduce Dolares: ");
      scanf("%f", &divisa);
      divisaR = divisa * Dolar;
      printf("\n%.2f dolares son %.2f pesos\n",divisa, divisaR);
      break;
  
  case 3:
      printf("Introduce Pesos: ");
      scanf("%f", &divisa);
      divisaR = divisa / Euro;
      printf("\n%.2f pesos son %.2f euros\n",divisa, divisaR);
      break;

  case 4:
      printf("Introduce Euros: ");
      scanf("%f", &divisa);
      divisaR = divisa * Euro;
      printf("\n%.2f euros son %.2f pesos\n",divisa, divisaR);
      break;
  
  default:
      break;
  }
  system("PAUSE");
  }while(opcion !=0);
  
  printf("\nFIN");
  return 0;
}
