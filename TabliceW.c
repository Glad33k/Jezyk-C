
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int ** alokuj(int n, int m)
{
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

int(* alokuj2(unsigned int n,unsigned int m))[]
{
    return malloc(n*sizeof(int[m]));
}



void wypisz(int **t, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void wypisz2(unsigned int n,unsigned int m, int t[][m]){
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void wczytaj(int **t, unsigned int n,unsigned int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }

}


void wczytaj2(unsigned int n,unsigned int m, int t[][m])
 {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }

}



void usun( unsigned int n, unsigned int m,int **t)
{
    for(int i=0;i<n;i++)
    {
        free(t[i]);
    }
    free(t);
}

void usun2(unsigned int n, int t[][n])
{
    free(t);
}

int **alokujtrojkat(unsigned int n)
{
    int **t=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        t[i]=malloc((i+1)*sizeof(int));
    }
    return t;
}

void wczytajtrojkat(int **t, unsigned int n)
{
    int liczba=1;
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            t[i][j]=liczba;
            liczba++;
        }
    }
}

void wypisztrojkat(int **t, unsigned int n)
    {
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}


int **alokujsmieszne(unsigned int n)
{
    int **t=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        t[i]=malloc(1*sizeof(int));
        if(i%2==0)
        t[i]=malloc(2*sizeof(int));
    }
    return t;
}


void wczytajsmieszne(int **t, unsigned int n)
{

 for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        t[i][0]=0;
        else
            for(int j=0;j<2;j++)
                t[i][j]=0;
    }
}


void wypiszsmieszne(int **t, unsigned int n)
    {
 for(int i=0;i<n;i++)
    {
        if(i%2!=0)
            printf("%d\t",t[i][0]);
            else
            for(int j=0;j<2;j++)
                printf("%d\t",t[i][j]);
        printf("\n");
    }
}




void zeruj(unsigned int n, unsigned int m,int **t )
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            t[i][j]=0;
        }
    }
}


void zeruj3(unsigned int n,unsigned int m, int t[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            t[i][j]=0;
    }
}


void zerujdwu(int t[][5],unsigned int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
            t[i][j]=0;
    }
}

int sumatab(unsigned int n, unsigned int m,int **t)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            suma=suma+t[i][j];
    }
    return suma;
}

int sredniawiersza(unsigned int n,unsigned int m, int **t)
{
    int s=0,max,indeks=0;

    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=0;j<n;j++)
            {
                s=s+t[i][j];
            }
        if(i==0)
         {
             max=s;
            indeks=i;
         }
         else if(s>max)
         {
             max=s;
             indeks=i;
         }


    }

return indeks;

}



float sredniawierszawynik(unsigned int n,unsigned int m, int **t)
{
    int s=0,indeks=0;
    float max;
    float ostateczny;
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=0;j<n;j++)
            {
                s=s+t[i][j];
            }
        if(i==0)
         {
             max=s;
            indeks=i;
         }
         else if(s>max)
         {
             max=s;
             indeks=i;
         }
    }
    ostateczny=max/m;

return ostateczny;
}


void przepisz(int **t1,int **t2,unsigned int n, unsigned int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        t2[i][j]=t1[i][j];
}


void zamiana(int **t1,int **t2,unsigned int n, unsigned int m)
{
    int pom;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            pom=t1[i][j];
            t1[i][j]=t2[i][j];
            t2[i][j]=pom;
        }
}

void zamianawiersz(int **t1,unsigned int n, unsigned int m)
{
    int pom;
    for(int i=0;i<n;i++)
        for(int j=0;j<m/2;j++)
        {
            pom=t1[i][j];
            t1[i][j]=t1[i][m-j-1];
            t1[i][m-j-1]=pom;
        }
}


void zamianawiersz2(unsigned int n,unsigned int m, int t[][m])
{
    int pom;
    for(int i=0;i<n;i++)
        for(int j=0;j<m/2;j++)
        {
            pom=t[i][j];
            t[i][j]=t[i][m-j-1];
            t[i][m-j-1]=pom;
        }
}


void zamienwiersze_wdol(int **t,unsigned int n, unsigned int m)
{
    int pom;
    for(int j=0;j<m;j++)
        {
            pom=t[n-1][j];
        for(int i=n-1;i>0;i--)
        {
            t[i][j]=t[i-1][j];

        }
            t[0][j]=pom;
        }
}


void zamianakolumny_wprawo(int **t,unsigned int n,unsigned int m)
{
    int pom;
    for(int i=0;i<n;i++)
    {
        pom=t[i][m-1];
        for(int j=m-1;j>0;j--)
        {
            t[i][j]=t[i][j-1];
        }
        t[i][0]=pom;
    }
}

void tarcza(unsigned int n)
{
    int **tab=alokuj(n,n);
    int licznik=1;
    for(int i=0;i<n/2;i++)
        {

        for(int j=0;j<n/2;j++)
        {
            tab[i][j]=i+licznik;
            tab[i][n-1-j]=i+licznik;
            tab[n-1-i][j]=i+licznik;
            tab[n-1-i][n-1-j]=i+licznik;


        }
        licznik++;

        }


        wypisz(tab,n,n);
}


int main()
{
     ///Cw6.2.1
    printf("\n\n CW6_2_1\n\n");
    printf("%p",alokuj(5,5));

    ///Cw6.2.2
    printf("\n\n CW6_2_2\n\n");
    printf("%p",alokuj2(5,5));

    /////Cw6.2.18 xD?
    printf("\n\n CW6_2_18\n\n");
    int **t=alokuj(3,3);
    //wczytaj(t,3,3);
    //wypisz(t,3,3);
    int t2[3][3];
    //wczytaj2(3,3,t2);
    //wypisz2(3,3,t2);
    int t3[4][4]={{20,20,20,20},{10,10,10,10},{10,10,10,10},{10,10,10,10}};

    /////Cw6.2.3
    printf("\n\n CW6_2_3\n\n");
    //usun(4,4,t3)
     /////Cw6.2.4
    printf("\n\n CW6_2_4\n\n");
    //usun2(5,t3);
    /////Cw6.2.7
    printf("\n\n CW6_2_7\n\n");
    int **tt=alokujtrojkat(4);
    //Dodatkowe
    wczytajtrojkat(tt,4);
    wypisztrojkat(tt,4);
    //DODATKOWE
    int **ttt=alokujsmieszne(5);
    wczytajsmieszne(ttt,5);
    wypiszsmieszne(ttt,5);

    /////Cw6.2.9
    printf("\n\n CW6_2_9\n\n");

    int **tab=alokuj(3,2);
    //wczytaj(tab,3,2);
    //zeruj(3,2,tab);
    //wypisz(tab,3,2);


    /////Cw6.2.10
    printf("\n\n CW6_2_10\n\n");
        int tabb[3][7]={{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7}};
    wypisz2(3,7,tabb);
    zeruj3(3,7,tabb);
    wypisz2(3,7,tabb);

    /////Cw6.2.8
    printf("\n\n CW6_2_8\n\n");
    ///zerujdwu(tab,3);

    /////Cw6.2.12
    printf("\n\n CW6_2_12\n\n");
    //int **taab=alokuj(2,2);
    //wczytaj(taab,2,2);
    //wypisz(taab,2,2);
    ////13 W DOMU DO ZROBIENIA
    //printf("suma z tej talbicy to: %d",sumatab(2,2,taab));
    ///SREDNIA Z KOLOKWIUM PO WIERSZACH MOZE BYC TAK JAK ZADANIE 16
    /////Cw6.2.16
    printf("\n\n CW6_2_16\n\n");
    int **taaab=alokuj(4,3);
    //wczytaj(taaab,4,3);
    //wypisz(taaab,4,3);
    //printf("Wiersz z najwieksza srednia to : %d",sredniawiersza(4,3,taaab));


     /////Cw6.2.17
    printf("\n\n CW6_2_17\n\n");

    int **taaaab=alokuj(3,4);
    //wczytaj(taaaab,3,4);
    //wypisz(taaaab,3,4);
    //printf("Wiersz z najwieksza srednia to : %f",sredniawierszawynik(3,4,taaaab));


     /////Cw6.2.19
    printf("\n\n CW6_2_19\n\n");
    int **tab19=alokuj(3,3);
    int **tab191=alokuj(3,3);
    //wczytaj(tab19,3,3);
    //przepisz(tab19,tab191,3,3);
    //wypisz(tab191,3,3);


    /////Cw6.2.20
    printf("\n\n CW6_2_20\n\n");
    //wczytaj(tab19,3,3);
    //wczytaj(tab191,3,3);
    //zamiana(tab19,tab191,3,3);
    //wypisz(tab19,3,3);
    //wypisz(tab191,3,3);


    /////Cw6.2.21
    printf("\n\n CW6_2_21\n\n");
        int **tab20=alokuj(4,4);
       // wczytaj(tab20,4,4);
        //zamianawiersz(tab20,4,4);
        //wypisz(tab20,4,4);

    /////Cw6.2.22
    printf("\n\n CW6_2_22\n\n");
    int tab22[3][3];
    //wczytaj2(3,3,tab22);
    //zamianawiersz2(3,3,tab22);
    //wypisz2(3,3,tab22);


    /////Cw6.2.23
    printf("\n\n CW6_2_23\n\n");
    int **tab23=alokuj(3,3);
    //wczytaj(tab23,3,3);
    //zamienwiersze_wdol(tab23,3,3);
    //wypisz(tab23,3,3);

    /////Cw6.2.24
    printf("\n\n CW6_2_24\n\n");
    //zamianakolumny_wprawo(tab23,3,3);
    //wypisz(tab23,3,3);


    ////zad dodatkowe
    printf("\n\n CWDODATKOWE\n\n");
    tarcza(4);



        return 0;
}
