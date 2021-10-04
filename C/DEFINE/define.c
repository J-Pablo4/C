// directivas de preprocesador
#include <stdio.h>

// Sustituciones por constantes simbólicas.
#define MAX_ALUMNS 1000
// Sustitución de código con macros
#define Saludar printf("Hola mundo!\n");
#define ImprimirGuiones int i; \
                        for ( i = 0; i < 10; i++)printf("------");\
                        printf("\n");
#define Dollars(pesos) pesos * 0.048
#define enter printf("\n");
#define Sumar(a,b,c) ((a) + (b) + (c));
                            
                        
                        

int main ()
{
    // si le escribo el ; en el define ya no lo tengo que poner abajo
    // porque es solo una sustitución. Si no lo escribo arriba, lo tengo que escribir abajo.
    Saludar
    ImprimirGuiones
    float p = 1500;
    float precioDolares = Dollars(p);
    printf("%.2f",precioDolares);
    int sum = 4 * Sumar(3,6,9 * 2)
    enter
    printf("Suma: %d", sum);
    return 0;
}
