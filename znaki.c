#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void wypisz(char *napis)
{

        printf("%s\n",napis);
}


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
    if(dl1==dl2)
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
    int i=0;
    while(napis1[i]!=0 || napis2[i]!=0)
    {
        if(napis1[i]<napis2[i])
            return 1;
        else if(napis1[i]>napis2[i])
            return 0;
        if(napis2[i]==0)
            return 0;
        i++;


    }
    return 0;
}

void przepisz(char *napis1,char *napis2)
{
    int i;
    for(i=0;i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
    wypisz(napis2);

}




void przepiszile(unsigned int n, char *napis1,char *napis2)
{
    int i;
    for(i=0;i<n && i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
    wypisz(napis2);

}



void sklej(char *napis1, char* napis2, char* napis3)
{
    int i,j;
    for(i=0;napis1[i]!=0;i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;i++,j++)
    {
        napis3[i]=napis2[j];
    }
    napis3[i]=0;
    wypisz(napis3);

}



void maleliterki(char *napis)
{
    int i;

    for(i=0;napis[i]!=0;i++)
    {
        if((napis[i]>='a') && (napis[i]<='z'))
            napis[i]=napis[i]+'A'-'a';

    }
    wypisz(napis);

}

void szyfrowanie(char *napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {
            if((napis[i]>='a') && (napis[i]<'x'))
            napis[i]=napis[i]+3;
            else if(napis[i]=='x')
                napis[i]='a';
            else if(napis[i]=='y')
                napis[i]='b';
            else if(napis[i]=='z')
                napis[i]='c';
    }
    wypisz(napis);
}

void deszyfrowanie(char *napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {

            if((napis[i]>'c') && (napis[i]<='z'))
            napis[i]=napis[i]-3;
            else if((napis[i]>='a') && (napis[i]<='c'))
            napis[i]=napis[i]+23;
    }
    wypisz(napis);
}


void wytnij(int n, int m, char *napis)
{
    int j,i;
    for(j=0;napis[j]!=0;j++);
    if(j+1>m)
    {
        for(i=0;i+m<j;i++)
        {
        napis[n+i]=napis[m+i+1];
        }
    }
    else if((n<j)&&(j+1<=m))
    {
        napis[n]=0;
    }

}


bool porownajcz(char *nap1, char*nap2, int n)
{
    int i;
    for(i=0;(nap1[i]!=0)&&(nap2[i]!=0);i++)
        if(nap1[n+1]!=nap2[i])
            return false;
    if(nap2[i]==0)
        return true;
    else
        return false;
}

void wytnij2(char *nap1, char *nap2)
{
    int i,dl;
    for(dl=0;nap2[dl]!=0;dl++);
    for(i=0;nap1[i]!=0;i++)
        if(porownajcz(nap1,nap2,i))
    {
        wytnij(i,i+dl-1,nap1);
        return;
    }
}

void wytnijzw(char *napis,char *napis2)
{
    int i,j;
    int znaki[256]={};
    for(i=0;napis2[i]!=0;i++)
    {
        znaki[napis2[i]]=1;
    }
    for(i=0,j=0;napis[i]!=0;i++)
    {
        if(znaki[napis[i]]==0)
        {
            if(j<i)
            napis[j]=napis[i];
            j++;
        }

    }
    napis[j]=0;
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
    printf("Czy 1 jest pierwszy? %d",porownajslownik("arbuz","arbuziak"));
    ///Cw5.2.5
    char *pierwszy="arbuz";
    char drugi[20]="arbiter";
    printf("\n\n CW5_2_5\n\n");
    przepisz(pierwszy,drugi);
    wypisz(pierwszy);
    wypisz(drugi);
    ///Cw5.2.6
    printf("\n\n CW5_2_6\n\n");
    char *pierwszy1="arbuz";
    char drugi2[20]="matematyka";
    przepiszile(3,pierwszy1,drugi2);
    ///Cw5.2.7
    printf("\n\n CW5_2_7\n\n");
    char *pierwszy7="Ala m";
    char *pierwszy71="a kota";
    char drugi7[20]="matematyka";
    sklej(pierwszy7,pierwszy71,drugi7);

    ///Cw5.2.8
    printf("\n\n CW5_2_8\n\n");

    char napisik[50]="elo elo elo elo duzo duzo, l";
    maleliterki(napisik);
    char napisik1[50]="nrorvbc";
    deszyfrowanie(napisik1);

    ///Cw5.2.9
    printf("\n\n CW5_2_9\n\n");

    char napisik123[50]="Informatyka";
    wytnij(3,6,napisik123);


    ///Cw5.2.10

    ///NIE DZIALA DALEJ (SKOPIOWANE Z KRZACZKOWSKIEGO)
     printf("\n\n CW5_2_10\n\n");
     char napisik1234[50]="Informatyka";
     char napisik1235[50]="for";
    wytnij2(napisik1234,napisik1235);
    wypisz(napisik1234);




    ///Cw5.2.11
     printf("\n\n CW5_2_11\n\n");
     wytnijzw(napisik1234,napisik1235);
     wypisz(napisik1234);
    return 0;
}
