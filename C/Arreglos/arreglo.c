#include <stdio.h>

#define TAM 4
#define L 'z' - 'a' + 1
int main()
{
    int primes[] = {2,3,5,7,11};
    int n[100] = {0};
/*     printf("%d\n",primes[8]);//out of range, no hay que hacerlo.
    scanf("%d",&primes[8]); //out of range, no hay que hacerlo.
    printf("%d\n",primes[8]); */
    /* scanf("%d",&primes[1]);
    printf("%d\n",primes[1]);
    char letters[4] = {'A','B',67,0x44};
    int index = 2;
    letters[index] = 'F';
    letters[index-1] +=3;

    // Arreglo: 'A', 'E', 'F', 'D'
    for (int i = 0; i < TAM; i++)
    {
        printf("%c ",letters[i]);
    }
     */
    char minusculas[L];
    for (int i = 0; i < L; i++)
    {
        minusculas[i] = 'a'+1;
    }
    for (int i = 0; i < L; i++)
    {
        printf("%c",minusculas[i]);
    }
    
    return 0;
}