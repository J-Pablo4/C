/*
PSEUDOCÓDIGO:
1. Inicio. Elecciones.
2. Mientras Voto != 0 entonces:
    2.1 Solicitar el voto al usuario.
    2.2 Si voto < 0 || voto > 4 entonces:
        2.2.2 VotoInvalido <- verdadero.
    2.3 Sino:
        2.3.2 VotoInvalido <- falso.
    2.4 FinSi.
    2.5 Si VotoInvalido == falso entonces:
        2.5.1 Según voto hacer:
            2.5.1.1 1:
                2.5.1.1.1 VotosCand[0] <- VotosCand[0] + 1.
                2.5.1.1.2 Escribir "Voto procesado!".
            2.5.1.2 2:
                2.5.1.2.1 VotosCand[1] <- VotosCand[1] + 1.
                2.5.1.2.2 Escribir "Voto procesado!".
            2.5.1.3 3:
                2.5.1.3.1 VotosCand[2] <- VotosCand[2] + 1.
                2.5.1.3.2 Escribir "Voto procesado!".
            2.5.1.4 4:
                2.5.1.4.1 VotosCand[3] <- VotosCand[3] + 1.
                2.5.1.4.2 Escribir "Voto procesado!".
        2.5.2 FinSegún.
    2.6 Sino:
        2.6.1 Escribir "Su voto no cuenta"
    2.7 FinSi.
3. FinMientras.
4. Mayor <- 0.
5. Para i=0 hasta 3 con paso 1 hacer:
    5.1 Si VotosCand[i] > mayor entonces:
        5.1.1 Mayor <- VotosCand[i].
        5.1.2 Ganador <- i.
    5.2 FinSi.
6. FinPara.
7. Ganador <- i+1.
8. Escribir "El ganador es: " + Ganador.
9. Fin. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int VotosCand[4] = {0,0,0,0};
bool VotoInvalido = false;
short Ganador, Voto = 1, mayor = 0;

int main(void)
{
    while (Voto != 0)
    {
        printf("\tBIENVENIDO A LAS ELECCIONES!\nTus opciones son:\nCandidato 1\nCandidato 2\nCandidato 3\nCandidato 4");
        printf("\n\nEscribe tu voto: "); 
        scanf("%i", &Voto); fflush(stdin);
        VotoInvalido = (Voto < 0 || Voto > 4) ? true : false;
        if (VotoInvalido == false) 
        {
            switch (Voto)
            {
            case 1:
                VotosCand[0]++;
                printf("Voto procesado!\n");
                break;
            case 2:
                VotosCand[1]++;
                printf("Voto procesado!\n");
                break;
            case 3:
                VotosCand[2]++;
                printf("Voto procesado!\n");
                break;
            case 4:
                VotosCand[3]++;
                printf("Voto procesado!\n");
                break;
            }
        } 
        else
        {
            printf("\nSu voto no cuenta");
        }
    }

    for (short i = 0; i < 4; i++)
    {
        if (VotosCand[i] > mayor)
        {
            mayor = VotosCand[i];
            Ganador = i;
        }
    }
    
    printf("El ganador es el candidato %i", Ganador+1);
    printf("\n");
    system("pause");
    return 0;
}