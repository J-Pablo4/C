#include <stdio.h>
#include <string.h>
#include <math.h>

#define ENTER printf("\n");
#define FLUSHIN fflush(stdin);
#define MAX 101

typedef struct
{
    double x,y;
}strVec2;

typedef struct 
{
    double distancia;
    int index1, index2;
}strComp;

strVec2 vectors[500];

strVec2 initVec2(double X,double Y);
strVec2 getVec2(void);
void printVec2(strVec2 Vector);
double Magnitude(strVec2);
double CompVec2(strVec2,strVec2);

int main() 
{
    int cantidad, j=0,f=0;
    double compare[500];
    strComp min[500];
    double temporal;
    do
    {
    printf("Insert the number of vectors you wish to compare: ");
    FLUSHIN
    scanf("%d",&cantidad);
    if(cantidad < 3 || cantidad>500)
    {
        printf("Error, The number of vectors has to be between 3 and 500.\n");
    }
    }while(cantidad < 3 || cantidad > 500);
    for (int i = 0; i < cantidad; i++)
    {
        vectors[i] = getVec2();
    }
    do
    {
        min[j].index1 = j;
        for (int i = 1+j; i < cantidad; i++)
        {
            compare[i] = CompVec2(vectors[j],vectors[i]);
        }
        temporal = compare[j+1];
        min[j].index2 = j+1;
        for(int k = j+2;k < cantidad; k++)
        {
            if (temporal>compare[k])
            {
                min[j].index2 = k;
                temporal = compare[k];
            }    
        }
        min[j].distancia = temporal;
        j++;
    } while (j < cantidad-1); 
    temporal = min[0].distancia;
    for (int i = 1; i < cantidad-1; i++)
    {
        if (temporal>min[i].distancia)
        {
            temporal = min[i].distancia;
            f=i;
        }
    }
    printf("Indexes: %d, %d",min[f].index1,min[f].index2);
    ENTER
    printVec2(vectors[min[f].index1]);
    printVec2(vectors[min[f].index2]);
    printf("Distances: %lf",min[f].distancia);
    return 0;
}
void printVec2(strVec2 Vector)
{
    printf("( %.2lf, %.2lf)\n",Vector.x,Vector.y);
}
strVec2 initVec2(double X,double Y)//recibir los datos 
{
    strVec2 Vector;
    Vector.x = X;
    Vector.y = Y;
    return Vector;
}
strVec2 getVec2(void)//recibir los datos del usuario
{
    double X,Y;
    do
    {
    printf("Write the vectors using required format -->");
    printf("X, Y: ");
    ENTER
    scanf("%lf, %lf",&X,&Y);
    if(((X<-100) || (X>100)) || ((Y<-100) || (Y>100)))
    {
        printf("Error, The value of vectors has to be between -100 and 100.\n");
    }
    }while(((X<-100) || (X>100)) || ((Y<-100) || (Y>100)));
    return initVec2(X,Y);
}
double Magnitude(strVec2 vector)
{
    double result,result2;
    result = pow(vector.x,2) + pow(vector.y,2);
    result2 = sqrt(result);
    return result2;
}
double CompVec2(strVec2 vector,strVec2 vector1)
{
  strVec2 temporal;
  temporal.x = (vector.x)-(vector1.x);
  temporal.y = (vector.y)-(vector1.y);
  return Magnitude(temporal);
}