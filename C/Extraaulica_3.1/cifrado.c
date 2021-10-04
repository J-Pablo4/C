#include <stdio.h>
#include <string.h>

#define ENTER printf("\n");
#define MAX 101

// variables globales y nuevos tipos de datos.
char szMensaje[MAX];
char szMensajeMayus[MAX];
int size=0,KeySize=0;
int Valores[MAX];
char Llave[MAX];
char LlaveMayus[MAX];
//Prototipo de funciones
void cifrado(int [], char [], int, int);
void Value(int [], char [], int);
void toUpperCase(char [],char []);

int main() 
{
  printf("Interoduce el mensaje a cifrar: ");
  gets(szMensaje);
  printf("Interoduce la llave de cifrado: ");
  gets(Llave);
  

  size = strlen(szMensaje);
  KeySize = strlen(Llave);

  toUpperCase(Llave,LlaveMayus);
  toUpperCase(szMensaje,szMensajeMayus);
  Value(Valores, LlaveMayus, KeySize);
  cifrado(Valores, szMensajeMayus,size,KeySize);
  puts(szMensajeMayus);
  return 0;
}

void Value(int Valores[], char LlaveMayus[], int KeySize)
{
  for(int i = 0; i <KeySize; i++)
  {
    Valores[i] = LlaveMayus[i] - 64;
  }
}
void cifrado(int Valores[], char szMensaje[],int size,int Keysize)
{
  for (int i = 0,j = 0 ; i < size ; i++ )
  {
    if(j==KeySize)
    {
      j=0;
    }
    if(szMensaje[i]!=' ')
    {
      szMensaje[i] += Valores[j];
      if(szMensaje[i]>'Z')
      {
        szMensaje[i] -= 26;
      }
      j++; 
    }
     
  } 
}
void toUpperCase(char origen[],char destino[])
{
    int i;
    for(i =0; origen[i] != '\0';i++ )
    {
        if (origen[i] >= 'a' && origen[i] <= 'z')
        {
            destino[i]= origen[i] - 32;
        }
        else
        {
            destino[i]= origen[i];
        }
        
    }
    destino[i]='\0';
}
