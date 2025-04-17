#include <stdio.h>
#include <stdlib.h>


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

    return 0;
}
