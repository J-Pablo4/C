#include <stdio.h>
#include <string.h>

#define ENTER printf("\n");
#define FLUSHIN fflush(stdin);
#define MAX 101

// variables globales y nuevos tipos de datos.
typedef struct
{
    char Nombre[101];
    char Telefono[21];
}strPersona;

strPersona Directorio[1000];
int Size;


//Protorio de funciones
strPersona initPersona(char[],char[]);//recibir los datos 
strPersona getPersona(void);//recibir los datos del usuario
void printPersona(strPersona);
void sortPersona(strPersona[],int); 
void swap(strPersona Directorio[],int start,int pos_min);
void selectionSort(strPersona Directorio[], int size);

int main() 
{
   printf("Introduce el numero de contactos: ");
  FLUSHIN
  scanf("%d", &Size);
  FLUSHIN 
  for(int i = 0; i <Size;i++)
  {
    Directorio[i] = getPersona();
    printf("Success!");
    ENTER
  }
  selectionSort(Directorio,Size);
    for(int i = 0; i <Size;i++)
  {
    printf("Contacto %d",i+1);
    ENTER
    printPersona(Directorio[i]);
    ENTER
  }
  
  
  return 0;
}

strPersona initPersona(char Nombre[], char Telefono[])//recibir los datos 
{
    strPersona Persona;
    strcpy(Persona.Nombre,Nombre); 
    strcpy(Persona.Telefono,Telefono); 
    return Persona;
}
strPersona getPersona(void)//recibir los datos del usuario
{
    char Name[101];
    char Telefono[21];
    printf("Introduce el nombre: ");
    FLUSHIN
    gets(Name);
    printf("Introduce el Telefono: ");
    FLUSHIN
    gets(Telefono);
    return initPersona(Name,Telefono);
}
void printPersona(strPersona contacto)
{
    //printf("Contacto: ");
    //ENTER
    printf("Nombre: ");
    puts(contacto.Nombre);
    printf("Telefono: ");
    puts(contacto.Telefono);
}

void selectionSort(strPersona Directorio[], int size)
{
    int start,pos_min,j=0;
    for (start=0; start<size-1; start++)
    {
        
        for (int i=pos_min=start; i<size; i++)
        {
            while(Directorio[i].Nombre[j] == Directorio[pos_min].Nombre[j] && i != pos_min)
            {
              j++;
            }
            if(Directorio[i].Nombre[j] < Directorio[pos_min].Nombre[j])
            {
                pos_min = i;
                j=0;
            }
        }
        
        swap(Directorio,start,pos_min);
    }
}
void swap(strPersona Directorio[],int start,int pos_min)
{
    strPersona t;
    t = Directorio[pos_min];
    Directorio[pos_min] = Directorio[start];
    Directorio[start] = t;
}