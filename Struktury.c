#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct trojkat
{
    double a,b,c;
};


double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}

double pole(struct trojkat t)
{

    double wynik;
    wynik=obwod(t)/2*(obwod(t)/2-t.a)*(obwod(t)/2-t.b)*(obwod(t)/2-t.c);
    return sqrt(wynik);
}

void przepisz(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}

void wypisz(struct trojkat tr1)
{
    printf("%f \n",tr1.a);
    printf("%f \n",tr1.b);
    printf("%f \n",tr1.c);
}

struct punkt
{
    double x,y,z;
};


double minimum(struct punkt tab[],int n)
{
    double min=sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
    double odleglosc;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            odleglosc=sqrt(pow(tab[i].x-tab[j].x,2)+pow(tab[i].y-tab[j].y,2)+pow(tab[i].z-tab[j].z,2));
            if(min>odleglosc)
                min=odleglosc;
        }

    }

    return min;
}


struct zespolone{
double a;
double b;


};


void wyswietl_liczbe_zespolona(struct zespolone liczba)
{
    printf("%f+%f i \n",liczba.a,liczba.b);
}


void wczytaj(struct zespolone liczba)
{
    scanf("%lf", &liczba.a);
    scanf("%lf", &liczba.b);
}



double modul_liczby_zespolonej(struct zespolone liczba)
{
    return sqrt(pow(liczba.a,2)+pow(liczba.b,2));
}

struct zespolone dodaj(struct zespolone liczba1, struct zespolone liczba2)
{
    struct zespolone suma;
    suma.a=liczba1.a+liczba2.a;
    suma.b=liczba1.b+liczba2.b;
    return suma;
};
///iloczyn, iloraz na zespolonych



int main()
{
    ///7.2.1
    printf("\n\n CW7_2_1\n\n");
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=5;
    printf("Obwod = %f\n",obwod(t1));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(struct trojkat));
    printf("Pole = %f\n",pole(t1));

     ///7.2.2
    printf("\n\n CW7_2_2\n\n");
    struct trojkat tr1;
    tr1.a=3;
    tr1.b=4;
    tr1.c=5;
    struct trojkat tr2;
    tr2.a=1;
    tr2.b=1;
    tr2.c=1;
    struct trojkat *wsk2=&tr2;
    wypisz(tr1);
    wypisz(tr2);
    przepisz(tr1,wsk2);
    printf("Po zamianie \n");
    wypisz(tr1);
    wypisz(*wsk2);

     ///7.2.3
    printf("\n\n CW7_2_3\n\n");
    struct punkt P;
    P.x=4;
    P.y=7;
    P.z=1;
    struct punkt Q;
    Q.x=2;
    Q.y=2;
    Q.z=8;
    struct punkt R;
    R.x=5;
    R.y=6;
    R.z=0;
    struct punkt tab[3]={P,Q,R};

    ///7.2.7
    printf("\n\n CW7_2_7\n\n");
    

    return 0;
}
