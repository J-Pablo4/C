//directivas de preprocesamiento, librerías externas
#include <stdio.h>
#include <stdlib.h>

//directivas de preprocesamiento, macros
#define Sumar(a,b) (a + b)
#define Restar(a,b) (a - b)
#define Multiplicar(a,b) (a * b)
#define Dividir(a,b) (a / b)

#define MostrarMenu printf("MATH BASIC OPERATIONS\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
#define LeerOpcion(op) printf("Give me an option: "); scanf("%i",&(op));
#define MostrarOpcion(op) printf("Your option: %d\n",op);
#define LeerOperando(x) printf("Write a number: "); scanf("%f",&(x));
#define MostrarResultado(x) printf("Result: %.2f\n", (x))
#define MostrarError printf("Operation not available. Program ends.\n");

//enumeraciones
//modifica la enumeración que está abajo, para que los valores coincidan con los números del menu
enum operaciones {SUMA=1, RESTA, MULTI, DIVI};

//Función que manda llamar a las operaciones
float realizarOperacion (int op, float a, float b)
{
    switch (op)
    {
    case SUMA:
        return Sumar(a,b);
    case RESTA:
        return Restar(a,b);
    case MULTI:
        return Multiplicar(a,b);
    case DIVI:
        if (b==0) 
        {
            printf("Tried to divide by zero, program ends.\n");
            //el programa termina con código de error de salida exitosa, no envía error al S.O.
            exit(EXIT_SUCCESS); //EXIT_SUCCESS es una constante definida en la librería estándar
        }
        return Dividir(a,b);
    default:
        MostrarError;
        break;
    }
    return 0.0; //ESCRIBE EN TU REFLEXIÓN ¿que pasaría si no pones este return?
}

int main (void)
{
    enum operaciones op = 1; 
    float a,b;
    float r;
    while (op>=SUMA && op<=DIVI)
    {
        MostrarMenu
        LeerOpcion(op)
        MostrarOpcion(op)
        //El siguiente código detecta error en el menú
        if (op<SUMA || op>DIVI)
            MostrarError
        else
        {
            //Leyendo los valores
            LeerOperando(a) 
            LeerOperando(b)

            //usando funcion
            r = realizarOperacion(op,a,b);
            MostrarResultado(r);
        }
    }
    return EXIT_SUCCESS;
}