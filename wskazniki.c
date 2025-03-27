#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

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

double * alokujdouble(){
    return malloc(sizeof(double));
}

float * alokujfloat(){
    return malloc(sizeof(float));
}

int * alokujblok(unsigned int n){
    return malloc(n * sizeof(int));
}

double * alokujblokdabla(unsigned int n){
    return malloc(n*sizeof(double));
}

double funkcjapom(int n)
{
    return n*7.54;
}


double funkcja(double (*funkcjapom)(int x),int y)
{
    return funkcjapom(y);
}

bool funkcjaporownanie(int (*fun1)(int x),int (*fun2)(int y),unsigned int n)
{
    for(int i=0;i<=n;i++)
    {
        if(fun1(i)!=fun2(i))
            return false;
    }
    return true;
}
int funkcjapom1(int x)
{
    return x-1;
}
int funkcjapom2(int x)
{
    return (x-1)*(x-1)*(x-1);
}
void przepisz(const int * a,int * b)
{
    *b=*a;
}
void przepisz2(const int * a,int * const b)
{
    *b=*a;
}
double srednia(int *a, int b)
{
    return sqrt(*a*b);
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

    ///3.2.9
    int *a=alokujcalkowita();
    printf("adres : %p \n",a);
    printf("Wartosc zmiennej pod tym adresem to %d \n",*a);
    *a=15;
    printf("adres to %p \n",a);
    printf("Wartosc to %d \n",*a);

    ///3.2.10
    double *a=alokujdouble();
    printf("adres : %p \n",a);
    printf("Wartosc zmiennej pod tym adresem to %lf \n",*a);
    *a=15.76;
    printf("adres to %p \n",a);
    printf("Wartosc to %lf \n",*a);

    ///Float
    float *a=alokujfloat();
    printf("adres : %p \n",a);
    printf("Wartosc zmiennej pod tym adresem to %f \n",*a);
    *a=15.58;
    printf("adres to %p \n",a);
    printf("Wartosc to %f \n",*a);

    ///3.2.11
    int n=12;
    printf("wskaznik poczatku zarezerwowanego bloku pamieci to %p",alokujblok(n));

    ///3.2.12
    int n=12;
    printf("Wskaznik poczatku zarezerowanego bloku pamieci to %p",alokujblokdabla(n));

    ///3.2.13
    int x=5;
    double (*wskaznikdofunkcji)(int);
    wskaznikdofunkcji=&funkcjapom;
    printf("%p\n",wskaznikdofunkcji);
    printf("%lf\n",funkcja(wskaznikdofunkcji,x));

    ///3.2.14
    int x=2;
    int (*wskaznikdofunkcji1)(int);
    int (*wskaznikdofunkcji2)(int);
    wskaznikdofunkcji1=&funkcjapom1;
    wskaznikdofunkcji2=&funkcjapom2;
    printf("Czy takie same %d \n",funkcjaporownanie(wskaznikdofunkcji1,wskaznikdofunkcji2,x));

    ///3.2.15
    const int a=15;
    int b=45;
    const int *wska=&a;
    int *wskb=&b;
    printf("stala %d, zmienona %d ",a,b);
    przepisz(wska,wskb);
    printf("stala %d, zmieniona %d",a,b);

    ///3.2.16
   const int a=15;
    int b=45;
    const int *wska=&a;
    int * const wskb=&b;
    printf("stala %d, zmienona %d ",a,b);
    przepisz2(wska,wskb);
    printf("stala %d, zmieniona %d",a,b);
    */
    int a=40;
    int b=30;
    int *wsk_a=&a;
    printf("Srednia z 2 liczb to %lf",srednia(wsk_a,b));
    return 0;
}
