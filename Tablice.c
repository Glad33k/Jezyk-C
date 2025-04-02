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

    return 0;
}




