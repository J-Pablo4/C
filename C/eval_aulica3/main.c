#include <stdio.h>
#include <string.h>
#define ENTER printf("\n");

void sum(char[],int);

int main()
{
    int x;
    char szStr[2000];
    gets(szStr);
    x = strlen(szStr);
    sum(szStr,x);
    
    return 0;
}
void sum(char szStr[],int x)
{
    for (int i = 0; i < x; i++)
    {
        
    }
    
}