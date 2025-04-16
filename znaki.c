#include <stdio.h>
#include <stdlib.h>





void wyczysc(char *napis)
{
    napis[0]=0;
}

int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {

        i++;
    }
    return i;
}

int porownaj(char *napis, char *napis1)
{
    int dl1=dlugosc(napis);
    int dl2=dlugosc(napis1);
    if(dl1=dl2)
        {
            for(int i=0; i<dl1-1;i++)
            {
                if(napis[i]!=napis1[i])
                    return 0;

            }
            return 1;
        }
        else
        return 0;
}

int porownajslownik(char *napis1,char *napis2)
{
    int i-0;
    while(napis[i]!=0 || napis2[i]!=0)
}



int main()
{
    ///Cw5.2.0
    printf("\n\n CW5_2_0\n\n");
    printf("Pozycja w kodzie ASCII literki 'A' %d\n",'A');
    printf("%d\n",',');
    printf("%d\n",'%');
    printf("%d\n",'*');
    printf("%d\n",'A');
    printf("%d\n",'"');
    printf("%d\n",']');
    for(int i=0;i<=127;i++)
    {
        printf("%d %c \n",i,i);
    }

    ///Cw5.2.1
    printf("\n\n CW5_2_1\n\n");
    char *napis="abcd";
    printf(napis);
    ///wyczysc(napis);

    ///Cw5.2.2
    printf("\n\n CW5_2_2\n\n");
    char *napis1="abcd";
    printf("Dlugosc napisu to %d",dlugosc(napis1));
    ///Cw5.2.3
    printf("\n\n CW5_2_3\n\n");
    char *napis3="abcd";
    char *napis31="abcd";
    printf("Czy sa rowne? 1-tak, 0-nie : %d",porownaj(napis3,napis31));
    ///Cw5.2.4
    printf("\n\n CW5_2_4\n\n");


    return 0;
}
