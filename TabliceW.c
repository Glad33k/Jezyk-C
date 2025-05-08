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
    wczytaj(t,3,3);
    wypisz(t,3,3);
    int t2[3][3];
    wczytaj2(3,3,t2);
    wypisz2(3,3,t2);
    int t3[4][4]={{20,20,20,20},{10,10,10,10},{10,10,10,10},{10,10,10,10}};
    return 0;
}
