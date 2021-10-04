#include <stdio.h>
#define COL 3
#define FIL 3
#define Salto printf("\n");

void getfloat(float matrix[][3],int fil, int col);
void printfloats(float matrix[][3],int fil, int col); //2 decimales de precisión
void toUnitary(float matrix[][3],int fil, int col);
void sumMatrix(float sum1[][3], float sum2[][3], float result[][3],int fil, int col);
void maxArray3d(float matrix[][3][4],int fil, int col,int p);
void sortMatrix(int matrix[][4], int fil, int col);

int main()
{
    // definición de arreglos multidimensionales.
    int matriz[FIL][COL];

    /* int matriz2[][2] = {{1,2},{3,4},{5,6}};
    printf("%d", matriz2[2][1]);
    Salto

    int matriz3[][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    printf("%d", matriz3[1][0][2]);

    int matriz3[][2][3] = {{0,0}}; */
    int x,y;
    float m1[2][3];
    float m2[5][3];

    /* getfloat(m1,2,3);
    printfloats(m1,2,3);
    Salto*/
    toUnitary(m2,5,3);
    printfloats(m2,5,3);

    Salto

    /* printf("Rows:");
    scanf("%d", &x);
    float sum1[x][3];
    float sum2[x][3];
    float result[x][3];
    getfloat(sum1,x,3);
    Salto
    getfloat(sum2,x,3);
    Salto
    printf("Sum:\n");
    printfloats(sum1,x,3);
    printf(" +\n ");
    printfloats(sum2,x,3);
    printf(" =\n ");
    sumMatrix(sum1,sum2,result,x,3);
    printfloats(result,x,3); */

    /* printf("Max num:\n");
    float d[2][3][4] = {{{1,2.22,3,4},{5,.4,7,1.8},{1,3,15.2,7}},
    {{1,.2,3,4.8},{6,.12,8,9},{0,.1,.11,3}}};
    maxArray3d(d,3,4,2); */

    int fil, col;

    // recorrer la matriz y guardar sus valores
    /* 
    Solicitar los valores de la matriz
    (0,0):
    (0,1): 
    */
    /* for (fil = 0; fil < FIL; fil++)
    {
        for ( col = 0; col < COL; col++)
        {
            printf("(%d,%d): ",fil,col);
            scanf("%d",&matriz[fil][col]);
        }
        
    }
    
    for (fil = 0; fil < FIL; fil++)
    {
        for ( col = 0; col < COL; col++)
        {
            printf("(%d,%d): %d",fil,col,matriz[fil][col]);
        }
        
    } */
    return 0;
}

void maxArray3d(float matrix[][3][4],int fil, int col,int p)
{
    float max = matrix[0][0][0];
    int b;
    for (b = 0; b < p; b++)
    {
        for (int i = 0; i < fil; i++)
        {
            for ( int c = 0; c < col; c++)
            {
                if (max < matrix[b][i][c])
                {
                    max = matrix[b][i][c];
                }
            }
        }
    }
    if (b>=1)
    {
        printf("%.2f",max);
    }
    
}
void sumMatrix(float sum1[][3], float sum2[][3], float result[][3],int fil, int col)
{
    for (int i = 0; i < fil; i++)
    {
        for ( int c = 0; c < col; c++)
        {
            result[i][c] = sum1[i][c]+sum2[i][c];
        }
    }
}
void getfloat(float matrix[][3],int fil, int col)
{
    for (int i = 0; i < fil; i++)
    {
        for ( int c = 0; c < col; c++)
        {
            printf("(%d,%d): ",i,c);
            scanf("%f",&matrix[i][c]);
        }
        
    }
}
void printfloats(float matrix[][3],int fil, int col)
{
    for (int f = 0; f < fil; f++)
    {
        printf("[");
        for ( int c = 0; c < col; c++)
        {
            if (c==2)
            {
                printf("%.2f ",matrix[f][c]);
            }
            else
            {
                printf("%.2f ",matrix[f][c]);
            }
        }
        printf("]");
        Salto
    } 
}
void toUnitary(float matrix[][3],int fil, int col)
{
    for (int i = 0; i < fil; i++)
    {
        for ( int c = 0; c < col; c++)
        {
            if ((c==0 && i==0)||(c==1 && i==1)||(c==2 && i==2))
            {
                matrix[i][c] =1;
            }
            else
            {
                matrix[i][c] = 0;
            }
        }
        
    }
}
