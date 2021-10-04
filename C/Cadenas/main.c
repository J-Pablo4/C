#include <stdio.h>
#include <string.h> //www.tutorialspoint.com/c_standard_library/string_h.htm
//https://www.tutorialspoint.com/c_standard_library/string_h.htm
#define MAX 101
#define Salto printf("\n");

// prototipo de función
void printStringWith(char [],char);
void toUpperCase(char [], char []);
void toLowerCase(char [], char []);

int main ()
{
    char szString[] = {'H','o','l','a','\0'};
    char szString2[] = "Hola";
    char szString3[MAX];
    char palabra1[] = "Hola Mundo!!";
    char palabra2[20];
    char szString5[MAX];

    printf("%s %d\n",szString, sizeof(szString));
    printf("%s %d\n",szString2, sizeof(szString2));
    printf("Insert Text: ");
    // scanf("%s",szString3); No lo usamos porque lee hasta que se escribe un espacio

    // gets(szString3);//función de stdio para lectura de cadenas
    // puts(szString3);//función de stdio para imprimir cadenas
    // printf("%s %d\n",szString3, sizeof(szString3));

    // acceso a los elementos de una cadena
    printf("%c\n",szString[2]);
    szString[2]='j';
    puts(szString);

    // imprimir una cadena, cada caracter separado por un caracter especial.
    // printStringWith(szString,'*');
    Salto
    toUpperCase(palabra1,palabra2);
    printf("%s\n",palabra2);
    Salto
    toLowerCase(palabra1,palabra2);
    puts(palabra2);

    // para calcular tamaño
    printf("String: %s, Size: %d",palabra2,strlen(palabra2));
    // copia de cadenas
    strcpy(szString5,szString);
    Salto
    printf("String: %s, Size: %d",szString5,strlen(szString5));

    if (strcmp(szString,palabra2))
    {
        printf("Hola Mundo");
    }
    return 0;
}

// implementación de funcioines
void toLowerCase(char palabra1[], char palabra2[])
{
    int i;
    for (i = 0; palabra1[i] !='\0'; i++)
    {
        if (palabra1[i]<='Z'&& palabra1[i]>='A')
        {
            palabra2[i] = palabra1[i]+32;
        }
        else
        {
            palabra2[i] = palabra1[i];
        }
    }
    // cerrar la cadena
    palabra2[i] = '\0';
}
void toUpperCase(char palabra1[], char palabra2[])
{
    int i;
    for (i = 0; palabra1[i] !='\0'; i++)
    {
        if (palabra1[i]<='z'&& palabra1[i]>='a')
        {
            palabra2[i] = palabra1[i]-32;
        }
        else
        {
            palabra2[i] = palabra1[i];
        }
    }
    // cerrar la cadena
    palabra2[i] = '\0';
}
void printStringWith(char szString[],char c)
{
    for (int i = 0; szString[i] !='\0'; i++)
        if (szString[i+1] == '\0')
            printf("%c",szString[i]);
        else
            printf("%c%c",szString[i],c);
}