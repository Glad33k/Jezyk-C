#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int mniejsze(int * a, int * b){
    if(*a<*b)
        return *a;
    else
        return *b;
}

int wmniejsze(int * a, int * b){
    if(*a<*b)
        return a;
    else
        return b;
}

void zamiana(int *a,int *b)
{
    int temp=*b;
    *b=*a;
    *a=temp;
    printf("%d,%d",*a,*b);

}
void zamianajm(int *a,int *b)
{
    int temp;
    if(*b<*a)
    {
    temp=*b;
    *b=*a;
    *a=temp;
    printf("%d,%d",*a,*b);
    }
    else
       printf("%d,%d",*a,*b);
}

int suma(const int *a, const  int *b)
{

    return *a+*b;
}
void przypisanie(int n, int *w)
{
    *w=n;

}
int dodaj_piec(int * a)
{
    *a=*a+5;
    return *a;
}

int * alokujcalkowita(){
    return malloc(sizeof(int));
}
int main()
{
    /*
    ///3.1.0
    int liczba=-505;
    printf("Adres zmiennej to %p \n\n",&liczba);
    int *wskaznik=&liczba;
    printf("Adres w wskazniku to %p \n\n",wskaznik);
    printf("Liczba szukana po wskazniku to %d",*wskaznik);

    ///wskazniki na stala i stale wskazniki
    //int i=0;
    //const int *a=&i; //adres moze sie zmieniac ale wartosc sie nie zmieni
    //int * const b=&i; //wartosc sie zmieni ale adres pozostanie taki sam
    //int const * const c=&i; //staly wskaznik na stala, nic sie nie zmieni
    //*a=1;//NIe mozna zmienic wartosci
    //*b=1; //mozna zmienic
    //a=b; //adres a moze byc adresem b ale nie na odwrot
    //b=a;//Nie mozna zmienic adresu stalego wskaznika
    //a=&liczba; //mozna
    //b=&liczba; //nie mozna
    //W c nic nie mozna robic
    ///3.2.1
    int a,b;
    scanf("%d %d",&a,&b);
    int* wa=&a;
    int* wb=&b;
    printf("Mniejsza z tych liczb to: %d",mniejsze(wa,wb));

    ///3.2.2
    int a,b;
    scanf("%d %d",&a,&b);
    int* wa=&a;
    int* wb=&b;
    printf("Wskaznik odnoszacy sie do mniejszej to %d",wmniejsze(wa,wb));

    ///3.2.3
    int a,b;
    scanf("%d %d",&a,&b);
    int* wa=&a;
    int* wb=&b;
    zamiana(wa,wb);

    ///3.2.4
    int a,b;
    scanf("%d %d",&a,&b);
    int* wa=&a;
    int* wb=&b;
    zamianajm(wa,wb);

    ///3.2.5
    const int a,b;
    scanf("%d %d",&a,&b);
    const int* wa=&a;
    const int* wb=&b;
    printf("Suma %d + %d to %d",a,b,suma(wa,wb));

    ///3.2.6
    int n=123,w=245;
    int *ww=&w;
    przypisanie(n,ww);
    printf("%d \n",*ww);
    printf("%d %d",n,w); //Globalna zmiana X

    int a=7;
    printf("%d \n",dodaj_piec(&a));
    printf("%d",a);
    */
    ///3.2.9
    int *a=alokujcalkowita();
    printf("adres : %d \n",a);
    printf("Wartosc zmiennej pod tym adresem to %d \n",*a);
    *a=15;
    printf("adres to %d \n",a);
    printf("Wartosc to %d \n",*a);


    return 0;
}
