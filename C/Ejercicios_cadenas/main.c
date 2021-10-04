#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

void reverse(char [], int);
void sort(char [], char []);

int main()
{
    int contador = 0;
    char String[MAX]={};
    char string2[MAX]={};
    char string3[MAX]={};
    printf("Insert Text: ");
    gets(String);
    contador = strlen(String);
    reverse(String, contador);
    
    return 0;
}
void reverse(char string[], int contador)
{
    char c;
    for (int i = 0; i < contador-1 ; i++)
    {
        c = string[i];
        string[i] = string[contador-1];
        string[contador-1] = c;
        contador--;
    }
    printf("%s\n", string);
}