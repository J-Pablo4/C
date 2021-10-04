#include <stdio.h>
#include <math.h>
#define Macramos(a) for (i = 0; a-j >0;){\
    j = i*i;\
    for (int k=0;k < 1;k++){\
      restado = a - j;\
      array[i] = restado;\
      for(int l=0;l<1;l++){\
        if(a-j <0) break;\
        printf("%d*%d+%d=%d\n",i,i,restado,a);}}\
          i++;} 

int main()
{
  // Valores de Z
  int num_u,j=0,i=0,restado;
  int array[1000];
  printf("Data: ");
  scanf("%d",&num_u);

  Macramos(num_u);
  return 0;
}