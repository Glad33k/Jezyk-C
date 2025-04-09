#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


void wypisz(unsigned int n,int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);

    }
    printf("\n");
}

void wypiszd(unsigned int n,double *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%f\t",tab[i]);

    }
    printf("\n");
}



void zad1a(unsigned int n,int *tab)
{
    for (int i=0;i<n;i++)
    {
        tab[i]=0;
    }
    wypisz(n,tab);
}

void zad1b(unsigned int n,int *tab)
{
    for (int i=0;i<n;i++)
    {
        tab[i]=i;
    }
    wypisz(n,tab);
}

void zad1c(unsigned int n,int *tab)
{
    for (int i=0;i<n;i++)
    {
        tab[i]=tab[i]*2;
    }
    wypisz(n,tab);
}
void zad1d(unsigned int n,int *tab)
{
    for (int i=0;i<n;i++)
    {
        tab[i]=abs(tab[i]);
    }
    wypisz(n,tab);
}
float zad2a(unsigned int n,int *tab)
{
    int suma=0;
    for (int i=0;i<n;i++)
    {
        suma=suma+tab[i];
    }
    return suma/n;
}

int zad2b(unsigned int n,int *tab)
{
    int suma=0;
    for (int i=0;i<n;i++)
    {
        suma=suma+tab[i];
    }
    return suma;
}

int zad2c(unsigned int n,int *tab)
{
    int suma=0;
    for (int i=0;i<n;i++)
    {
        suma=suma+tab[i]*tab[i];
    }
    return suma;
}

float zad3(unsigned int n, const int *tab)
{
    int suma=0;
    for (int i=0;i<n;i++)
    {
        suma=suma+tab[i];
    }
    return suma/n;
}

float zad4(unsigned int n, unsigned int *tab)
{
    int mnozenie=1;
    for (int i=0;i<n;i++)
    {
        mnozenie=mnozenie*tab[i];
    }
    return pow(mnozenie,1.0/n);
}

int zad5(unsigned int n)
{
    int pom,i,j;
    bool sito[n];
    for(i=0;i<n;i++)
    {
        sito[i]=true;
    }
    for(i=2;i<n;i++)
    {
        if(sito[i])
        {
            pom=i;
            for(j=2*i;j<n;j=j+i)
            {
                sito[j]=false;
            }
        }

    }
    return pom;
}


void zadd(unsigned int n)
{
    int s=0;
    int pom,i,j;
    bool sito[n];
    for(i=0;i<n;i++)
    {
        sito[i]=true;
    }
    for(i=2;i<n;i++)
    {
        if(sito[i])
        {
            pom=i;
            for(j=2*i;j<n;j=j+i)
            {
                sito[j]=false;
            }
        }
    if(sito[i])
        s=s+1;
    }
    printf("Suma liczb pierwszych to %d \n",s);
}

void zad6a( unsigned int n, int *taba, int *tabb )
{
    int i;
    for(i=0;i<n;i++)
    {
        tabb[i]=taba[i];
    }

}
void zad6b( unsigned int n, int *taba, int *tabb )
{
    int i;

    for(i=0;i<n;i++)
    {
        tabb[n-1-i]=taba[i];
    }

}

void zad7a(unsigned int n, int*tab1, int *tab2, int *tab3)
{
    for(int i=0;i<n;i++)
        tab3[i]=tab1[i]+tab2[i];
}

void zad7b(unsigned int n, int*tab1, int *tab2, int *tab3)
{
    for(int i=0;i<n;i++)
        if(tab1[i]>tab2[i])
            tab3[i]=tab1[i];
            else
            tab3[i]=tab2[i];
}

void zad7c(unsigned int n,int *tab1, int *tab2, int *tab3)
{
    int pom;

    for(int i=0;i<n;i++)
    {

        pom=tab3[i];
        tab3[i]=tab2[i];
        tab2[i]=tab1[i];
        tab1[i]=pom;

    }


}

void zad8a(unsigned int n, double *tab1, double *tab2, double *tab3)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i];
        tab3[i+n]=tab2[i];
    }
}

void zad8b(unsigned int n, double *tab1, double *tab2, double *tab3)
{
    for(int i=0;i<2*n;i++)
    {
        if(i%2==0)
        tab3[i]=tab2[(i-1)/2];
        else
        tab3[i]=tab1[i/2];
    }
}


void zad9(unsigned int n, int *tab1, int *tab2, int *tab3)
{
    int p,d,t;

    for(int i=0;i<n;i++)
    {
        p=tab1[i];
        d=tab2[i];
        t=tab3[i];
        if(p>=d && p>=t)
            tab3[i]=p;
        else if (d>=t)
            tab3[i]=d;
        else
            tab3[i]=t;
        if(p<=d && p<=t)
            tab1[i]=p;
        else if (d<=t)
            tab1[i]=d;
        else
            tab1[i]=t;
        tab2[i]=p+d+t-tab3[i]-tab1[i];

    }
}

void dodatkowe (int *tab)
{
    int min=10000;
    int max=0;
    for(int i=1;i<12;i++)
    {
        if(tab[i-1]<tab[i] && tab[i]>tab[i+1])
        {

        if(max<=tab[i])
        {

            max=tab[i];}
        printf(" %d, - %d maksimum \n",i,tab[i]);}
    if(tab[i-1]>tab[i] && tab[i]<tab[i+1])
    {
        if(min>=tab[i])
        min=tab[i];
        printf(" %d, - %d minimum \n",i,tab[i]);
    }}
    printf("%d - global max, %d - global min",max,min);

}






int main()
{
    ///Cw4.2.0
    printf("\n\n CW4_2_0\n\n");
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6; tab[1]=2; tab[2]=6;tab[3]=7;
    wypisz(rozmiar,tab);
    printf("%d\n",*tab);
    int tab2[]={9,5,7,3};
    wypisz(rozmiar,tab2);
    printf("%d\n",tab2[2]);
    ///4.2.1
    printf("\n\n CW4_2_1\n\n");
    int tab3[]={5,12,5,3};
    zad1a(4,tab3);
    zad1b(4,tab3);
    zad1c(4,tab3);
    zad1d(4,tab3);
    ///4.2.2
    printf("\n\n CW4_2_2\n\n");
    int tabb[]={1,-5,10,30};
    printf("\n Srednia to %lf \n",zad2a(4,tabb));
    printf("\n Suma to %d \n",zad2b(4,tabb));
    printf("\n Suma kwadratow to %d \n",zad2c(4,tabb));
    ///4.2.3
    printf("\n\n CW4_2_3\n\n");
    int tabbb[]={5,2,5,7};
    printf("\n Srednia elementow to %f \n",zad3(4,tabbb));
    ///4.2.4
    printf("\n\n CW4_2_4\n\n");
    int tab4[]={1,4,1,8,1};
    printf("\n Srednia geometryczna elementow to %f \n",zad4(5,tab4));
    ///4.2.5
    printf("\n\n CW4_2_5\n\n");
    printf("Najwieksza liczba pierwsza w zakresie to: %d \n \n",zad5(30));
    ///Dodatkowe
    printf("\n\n CWDODATKOWE\n\n");
    zadd(541);
    ///4.2.6
    printf("\n\n CW4_2_6\n\n");
    int tab6a[]={1,5,7,2,6};
    int tab6b[5];
    zad6a(5,tab6a,tab6b);
    wypisz(5,tab6b);
    zad6b(5,tab6a,tab6b);
    wypisz(5,tab6b);
    ///4.2.7
    printf("\n\n CW4_2_7\n\n");

    int tab7a[]={1,2,3,4,5};
    int tab7b[]={5,4,3,2,1};
    int tab7c[5];
    zad7a(5,tab7a,tab7b,tab7c);
    wypisz(5,tab7c);
    zad7b(5,tab7a,tab7b,tab7c);
    wypisz(5,tab7c);
    zad7c(5,tab7a,tab7b,tab7c);
    wypisz(5,tab7a);
    wypisz(5,tab7b);
    wypisz(5,tab7c);
    ///4.2.8
    printf("\n\n CW4_2_8\n\n");
    double tab8a[]={1,2,3,4,5};
    double tab8b[]={10,20,30,40,50};
    double tab8c[10];
    zad8a(5,tab8a,tab8b,tab8c);
    zad8b(5,tab8a,tab8b,tab8c);
    wypiszd(10,tab8c);
    ///4.2.9
    printf("\n\n CW4_2_9\n\n");
    int tab9a[]={1,2,3,4,8};
    int tab9b[]={6,4,66,1024,522};
    int tab9c[]={10,123,53,12,8};
    zad9(5,tab9a,tab9b,tab9c);
    wypisz(5,tab9a);
     wypisz(5,tab9b);
      wypisz(5,tab9c);
    ///DODATKOWE
    printf("\n\n DODATKOWE \n\n");
    int tabd[]={7,2,4,5,8,6,1,10,13,10,14,7,8};
    dodatkowe(tabd);
     ///4.2.10
    printf("\n\n CW4_2_10\n\n");
    return 0;
}
