// directivas de preprocesamiento
#include <stdio.h>

// enumeraciones y nuevos tipos de datos
enum{SOLTERO=-3,CASADO,VIUDO};
enum boolean {FALSO,VERDADERO};
// variables globales

// programa principal
int main()
{
    enum boolean bandera = FALSO;
    int estado = SOLTERO;
    printf("%d\n",estado);
    printf("%d %d %d\n",SOLTERO,CASADO,VIUDO);

    do
    {
        // bandera = FALSO;
        printf("Dame tu estado civil: ");
        scanf("%d", &estado);
        fflush(stdin);
        switch (estado)
        {
            case SOLTERO:
                printf("Eres soltero\n");
                bandera = VERDADERO;
                break;
            case CASADO:
                printf("Eres casado\n");
                break;
            case VIUDO:
                printf("Eres viudo\n");
                break;
            default:
                printf("Estado no existente\n");
                break;
        }
        if (bandera)
        {
            printf("Que malo que eres soltero, どうてい\n");
            bandera = FALSO;
        }
        
    } while (estado>=SOLTERO && estado<=VIUDO);
    
    return 0;
}