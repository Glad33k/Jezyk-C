#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int modul(int n)
{
    if(n<0)
        return -n;
        else
        return n;
}
int silnia(int n)
{
    int wynik=1;
    for(int i=2;i<=n;i++)
    {
        wynik=wynik*i;
    }
    return wynik;

}

int naj(int unsigned n)
{
    int max=0;
    for(int i=n-1;i>0;i--)
    {
        if(n%i==0)
            return i;

    }
}
double pot2(n)
{
    double wynik=1;
    if(n>=0)
    for(int i=1;i<=n;i++)
        wynik=wynik*2;
    else
    for(int i=-1;i>=n;i--)
        wynik=wynik/2;
    return wynik;
}


double potn(int n,int m)
{
double wynik=1;
    if(m>=0)
    for(int i=1;i<=m;i++)
        wynik=wynik*n;
    else
    for(int i=-1;i>=m;i--)
        wynik=wynik/n;
    return wynik;
}
int pierwiastek(int unsigned n)
{
    for(int i=n;i>0;i--)
            if(i*i<=n)
                return i;

}

int pierwiasteknm(int unsigned n, int unsigned m)
{
    for(int i=0;i<=n;i++)
            if(potn(i,m)>=n)
                return i-1;
}

int NWD(int n,int m)
{
    int i,max=0;
for(i=1;i<=n;i++)
if(n%i==0 && m%i==0)
{
        max=i;
}
return max;
}

int sumazgpierw(int n)
{
    int s=0;
    for(int i=2;i<n;i++)
    {
        if(NWD(n,i)==1)
            s=s+i;
    }
    return s;
}
int sumapod(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
        s=s+pierwiastek(i);
    return s;
}

void kwlicz(int n)
{
    int i=1;
    int j=n;
    for(int i=1;i<=j;i++)
        for(int j=n;j>=i;j--)
        if(i*i+j*j==n)
        printf("%d, \n",i,j);
}
int licz()
{
    static int zz=0;
    zz++;
    printf("%d \n",zz);
}
int lllicz(int n)
{
    static int zz=0;
    zz=zz+n;
    printf("suma to %d \n",zz);
    return n;
}

void pslos()
{
   static float a=0.6;
        a=1-(a*a);
        printf("%lf \n",a);

}
int silniar(int n)
{
    if(n<=1)
        return 1;
    return n*silniar(n-1);
}






int main()
{

    int n,m;
    printf("Podaj liczbe: \n");
    scanf("%d %d",&n,&m);
    ///Zadanie2.2.1
    ///printf("%d",modul(n));
    ///Zadanie2.2.2
    ///printf("%d!=%d",n,silnia(n));
    ///Zadanie2.2.3
    /*
    if(n<2)
        printf("Blad \n");
    else
        printf("Najwiekszy dzielnik liczby %d to %d",n,naj(n));
    */
    ///Zadanie2.2.4 i 2.2.5
    ///printf("Liczba 2^%d = %lf",n,pot2(n));
    ///2.2.6 i 2.2.7
    ///printf("%d^%d=%lf",n,m,potn(n,m));
    ///2.2.8
    ///printf("Pierwiastek z %d to %d",n,pierwiastek(n));
    ///2.2.9
    ///printf("Pierwiastek %d z %d to %d",n,m,pierwiasteknm(n,m));
    ///2.2.10
    ///printf("Suma liczb wzglednie pierwszych z %d to %d ",n,sumazgpierw(n));
    ///2.2.11
    ///printf("Suma podlog pierwiastkow zwyklych z %d to %d",n,sumapod(n));
    ///2.2.13
    ///kwlicz(n);
    ///2.2.17
    ///licz();
    ///licz();
    ///licz();
    ///2.2.18
    /// pslos();
    ///pslos();
    ///2.2.19
    ///printf(" wynik == %d",lllicz(n));
    ///printf(" wynik =%d",lllicz(m));
    ///2.2.20
    printf("silnia = %d",silniar(n));

    return 0;
}
