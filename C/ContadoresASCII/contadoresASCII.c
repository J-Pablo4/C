#include <stdio.h>

int main (void)
{
    int i =21;
    printf("Caracteres de la A a la Z y su codigo numerico\nCodigo Simbolo\n");
    for (unsigned char c = 0; c <= 20; c++)
    {
        
        printf("%d\t%c \t\t %d\t%c \t\t %d\t%c \t\t %d\t%c \t\t %d\t%c \t\t %d\t%c \t\t %d\t%c\n",c,c,c+i,c+i,c+(i*2)-1,c+(i*2)-1,c+(i*3)-2,c+(i*3)-2,c+(i*4)-3,c+(i*4)-3,c+(i*5)-4,c+(i*5)-4,c+(i*6)-5,c+(i*6)-5);
        i--;
    }
    
    return 0;
}