#include <stdio.h>
 
int main(void)  
{ 
int num; 
int numero_r; 
printf("Escribe un numero: "); 
scanf("%d", &num); 

do 
{ 

if(num %2 == 0) 
{ 
numero_r = num; 
num /= 2; 
printf("%d/2 = %d\n",numero_r, num); 
}

if(num==1)break; 

if (num %2 !=0 ) 
{ 
numero_r = num; 
num = (num*3) + 1;  
printf("(%dx3)+1 = %d\n",numero_r, num); 
} 

}while (num >1); 
printf("FIN");

return 0; 
} 