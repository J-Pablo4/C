// directivas de preprosesamiento
#include <stdio.h>
#include <string.h>
#include <math.h>

// variables globales y nuevos tipos de datos(typedef, structs, unions)
// Definiendo la estructura de la manera tradicional, sin typedef
/* struct strDate
{
    int day,month,year;
    char mName[12];
}; */
// definiendo estructuras, poniendo nombre mediante alias
typedef struct
{
    int day,month,year;
    char mName[12];
}strDate;
struct strVec3
{
    double x,y,z;
};

struct strTicket
{
    unsigned int nTicketid;
    strDate purchaseDate;
    double amount;
} ticket1, ticket2;// declaración de variables globales

// alias
// alias para definir nuevos tipos de datos
typedef unsigned long int uint;
typedef float costos;

// alias para definir nuevos tipos de datos, tipo arreglos
typedef float fifteenFloats[15];
typedef char cadenas[100];


// protoripo de funciones
struct strVec3 initVec3(double, double, double);
struct strVec3 getVec3(void);
/* void printVec3(struct strVec3); */
double Magnitude(struct strVec3);
double dot(struct strVec3,struct strVec3);

strDate initDate(int, int, int, char[]);//recibir los datos fijos
strDate getDate(void);//recibir datos del usuario
void printDate(strDate);//imprimir la estructura

struct strTicket initTicket(unsigned int,int,int,int,char[], double);
void printTicket(struct strTicket);

// void RecibirCostos(costos costo);

// función principal
int main()
{
    // Tema: optimización de memoria
    uint x;
    x = 123456;
    printf("%p",&x);

    // Tema de estructuras
    /* // declaración de variable
    unsigned long int n1;
    uint32 n2;

    float groupfloats[15];
    fifteenFloats groupfloats2;

    // declaración de estructuras
    char szCad[10];
    
    strDate today,tomorrow = {1,5,2021,"Mayo"};//los valores en corchetes deben ir en orden de como se inició la estructura.
    strDate otherDay, date, date2;

    struct strTicket myticket = initTicket(10,4,5,2021,"mayo",20);

    struct strTicket ticketArray[200];
    printTicket(ticketArray[100]);
    memset(ticketArray,0,sizeof(ticketArray)); //inicializar un arreglo 'nombre del arreglo'/valor inicial/tamaño del arreglo
    memset(ticketArray,0,sizeof(struct strTicket)*200);//para usarse en cualquier función que tenga el arreglo, aunque no sea donde fue creado
    printTicket(ticketArray[100]);

    printf("Ticket's size: %d\n",sizeof(struct strTicket));
    printf("Ticket's size: %d\n",sizeof(ticketArray[0]));
    printf("Array Ticket's size: %d\n",sizeof(ticketArray));

    printTicket(myticket);

    fifteenFloats averages;
    averages[14]= 100;
    printf("%.2f\n",averages[14]);

   /*  struct strVec3 vector,vector2 = {1,5,2};

    // declaración de estructura y acceso a miembros.
    today.day = 30;
    today.month = 4;
    today.year = 2021;
    strcpy(today.mName,"Abril");

    // igualación de estructuras
    otherDay = tomorrow;

    //iniciando una estructura mediante la función initDate.
    date = initDate(17,5,2021,"May");
    printDate(date);

    date2 = getDate();
    printDate(date2);

    vector = getVec3();
    printVec3(vector);
    printf("Magnitud: %lf\n", Magnitude(vector));
    printf("Dot: %lf", dot(vector,vector2)); */ 

    return 0;
}

struct strTicket initTicket(unsigned int nticketId, int day,int month,int year,char szmName[], double amount)
{
    struct strTicket t;
    t.nTicketid = nticketId;
    //struct strDate
    t.purchaseDate.day = day;
    t.purchaseDate.month = month;
    t.purchaseDate.year = year;
    strcpy(t.purchaseDate.mName,szmName);

    t.amount = amount;
    return t;
}

void printTicket(struct strTicket t)
{
    printf("Struct strTicket\n");
    printf("TicketID: %d\n",t.nTicketid);
    // printDate(t.purchaseDate);
    printf("Purchase date: %d/%s/%d\n",t.purchaseDate.day,t.purchaseDate.mName,t.purchaseDate.year);
    printf("$$: %.2lf\n",t.amount);
}

struct strVec3 initVec3(double x, double y, double z)
{
    struct strVec3 vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}
struct strVec3 getVec3(void)
{
    double x,y,z;
    printf("X: ");
    scanf("%lf",&x);
    printf("Y: ");
    scanf("%lf",&y);
    printf("Z: ");
    scanf("%lf",&z);
    return initVec3(x,y,z);
}
void printVec3(struct strVec3 vector)
{
    printf("struct steVec3\n");
    printf("X: %lf\n",vector.x);
    printf("Y: %lf\n",vector.y);
    printf("Z: %lf\n",vector.z);
}
double Magnitude(struct strVec3 vector)
{
    double result,result2;
    result = pow(vector.x,2) + pow(vector.y,2) + pow(vector.z,2);
    result2 = sqrt(result);
    return result2;
}
double dot(struct strVec3 vector1, struct strVec3 vector2)
{   
    double result;
    result= (vector1.x*vector2.x) + (vector1.y*vector2.y) + (vector1.z*vector2.z);
    return result;
}
strDate initDate(int day, int month, int year, char mName[])//recibir los datos fijos, textuales.
{
    strDate date;
    date.day = day;
    date.month = month;
    date.year = year;
    strcpy(date.mName,mName);
    return date;
}
strDate getDate(void)//pedir datos del usuario, guardar
{
    int day, month, year;
    char mName[12];
    printf("Day in number: ");
    scanf("%d", &day);
    printf("Month in number: ");
    scanf("%d", &month);
    printf("Month's name: ");
    scanf("%s", mName);
    printf("Year: ");
    scanf("%d", &year);
    return initDate(day,month,year,mName);
}
void printDate(strDate date)//imprimir la estructura
{
    printf("struct strDate\n");
    printf("Day: %d\n",date.day);
    printf("Month: %d\n",date.month);
    printf("Month's Name: %s\n",date.mName);
    printf("Year: %d\n",date.year);
}
