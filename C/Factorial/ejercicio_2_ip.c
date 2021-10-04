// Desempaquetando información
#include <stdio.h>

int main (void)
{
    unsigned int direccion_ipv4;
    unsigned int N1;
    unsigned int N2;
    unsigned int N3;
    unsigned int N4;
    unsigned int A1;
    unsigned int A2;
    unsigned int A3;
    unsigned int A4;
    unsigned int mensaje;
    int cont;
    unsigned int texto[1000];

    printf("Ingrese datos:\n ");
    scanf("%d", &direccion_ipv4);

    N1 = (direccion_ipv4>>24)&255;
    N2 = (direccion_ipv4>>16)&255;
    N3 = (direccion_ipv4>>8)&255;
    N4 = direccion_ipv4&255;

    int contw =0; 
    while (mensaje !=0)
    {
       
      printf("\n");
      scanf("%d", &mensaje); 
      if (mensaje==0)
      {
        break;
      }
      
      A1 = (mensaje>>24)&255;
      A2 = (mensaje>>16)&255;
      A3 = (mensaje>>8)&255;
      A4 = mensaje&255;

        for (cont=0; cont < 3 ; )
        {
            cont= cont + (contw*4);

            texto[cont] = A1;

            cont++;

            texto[cont] = A2;

            cont++;

            texto[cont] = A3;

            cont++;

            texto[cont] = A4;

            contw++;
        }
    }
    
    printf("Direccion de la terminal: %d.%d.%d.%d",N1,N2,N3,N4);
    printf("\nMensaje: ");
    for (int i = 0; i <= cont; i++)
    {
      printf("%c",texto[i]);
    }
    return 0;
}