#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define JUMP printf("\n");

int main(void){
    int arr[SIZE];
    int N,unit,ten,hundred;
    int number=1;

    printf("Enter a number between 1 and 1000:");
    JUMP
    scanf("%d", &N);

    for(int i=0;i<1000;){
        if(number<=9){
            arr[i]=number;
            i++;
        }
        else if (number>9 && number<=99)
        {
            ten = number/10;
            unit = number-(ten*10);
            arr[i]=ten;
            arr[i+1]=unit;
            i=i+2;
        }
        else if (number>99 && number<=999)
        {
            hundred = number/100;
            ten = (number-(hundred*100))/10;
            unit = (number - (hundred*100 + ten*10));
            arr[i]=hundred;
            arr[i+1]=ten;
            arr[i+2]=unit;
            i=i+3;
        }
        number++;
    }
    if (N>=1 && N<=1000)
    {
        if (arr[N-1]%2==0)
        {
            printf("EVEN");
        }
        else{
            printf("ODD");
        }
        
    }
    

    return 0;
}