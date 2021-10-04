#include <stdio.h>

int main (void)
{
    /* int x=11;
     while (x)
    {
        printf("%d\n",x);
        x--;
    } 
    while (x--)
    {
        if (x==0)
        {
            break;//romper el ciclo más cercano
        }
        printf("%d\n",x);
    } */
    int x= 10;
    while (x--) printf("%d\n",x+1);
    // usando ciclo infinito
    int y=10;
    while (1)
    { 
        if (y == 0) break;
        printf("%d\n",y--);
    }
    return 0;
}