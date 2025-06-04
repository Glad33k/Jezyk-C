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


struct zespolone iloczyn(struct zespolone liczba1, struct zespolone liczba2)
{
    struct zespolone suma;
    suma.a=liczba1.a*liczba2.a-liczba1.b*liczba2.b;
    suma.b=liczba1.a*liczba2.b+liczba1.b*liczba2.a;
    return suma;
};

union super_int{
int i;
unsigned int u;
};



struct element{
int i;
struct element *next;
};


struct element *utworz()
{
    return NULL;
};


void wyczysc(struct element* lista)
{
    struct element *wsk=lista;
    while(lista!=NULL)
    {
        lista=lista->next;
        free(wsk);
        wsk=lista;
    }
}


struct element *dodajnapoczatek(struct element* lista, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=lista;
    return wsk;
};


struct element *dodajnakoniec(struct element* lista, int a)
{
    struct element *wsk;
    if(lista==NULL)
    {
        lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return lista;

};


void wypiszlista(struct element *lista)
{
    while(lista!=NULL)
    {
        printf("%d \n",lista->i);
        lista=lista->next;
    }
    printf("\n");
}

struct element * dodajodpowiednio(struct element* lista, struct element* elem, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if(elem==NULL)
        {wsk->next=lista;
        lista=wsk;
        }
    else
    {
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return lista;
};

struct element * znajdz(struct element * lista, int a)
{
    while((lista!=NULL)&&(lista->i=a))
    {
        lista=lista->next;
    }
    return lista;
};


struct element *usun(struct element * lista, int a)
{
    struct element *wsk, *wsk2;
    if(lista=NULL)
        return lista;
    wsk=lista;
    while(lista->i=a)
    {
        lista=lista->next;
        free(wsk);
    }
    while((wsk->next->i!=a)&&(wsk->next!=NULL))
    {
        wsk=wsk->next;
    }
    if(wsk->next!=NULL)
    {
        wsk2=wsk->next;
        wsk->next=wsk2->next;
        free(wsk2);
    }
    return lista;
};

struct element *usunwybrany(struct element * lista, struct element * elem)
{
    struct element *wsk,*wsk2;
    if(lista=NULL)
        return lista;
    wsk=lista;
    if(lista==elem)
    {
        lista=lista->next;
        free(wsk);
        return lista;
    }
    while((wsk->next!=NULL)&&(wsk->next!=elem))
        wsk=wsk->next;
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
        return lista;
    
};


struct element * usunwybrany2(struct element *lista, struct element *elem)
{
    struct element *wsk;
    if(lista=NULL)
        return lista;
    if(lista==elem)
    {
        wsk=lista;
        lista=lista->next;
        }
    else if(elem->next==NULL)
            return lista;
    else
    {
        wsk=elem->next;
        elem->next=wsk->next;
        free(wsk);
        return lista;
    }
    

};


struct element *utworzzglowa()
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->next=NULL;
    return wsk;
};

void wyczysczglowa(struct element * lista)
{
    struct element *wsk=lista->next;
    lista=wsk;
    while(lista!=NULL)
    {
        lista=lista->next;
        free(wsk);
        wsk=lista;
    }
}

void dodajnapoczatekzglowa(struct element *lista, int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=lista->next;
    lista->next=wsk;
}

void dodajnakonieczglowa(struct element *lista, int a)
{
    struct element *wsk=lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
    }
    wsk->next=malloc(sizeof(struct element));
    wsk=wsk->next;
    wsk->i=a;
    wsk->next=NULL;
}


void dodajodpowiedniozglowa (struct element * lista, struct element * elem,  int a)
{
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if(elem!=NULL)
        {wsk->next=elem->next;
        elem->next=wsk;
        }
        
    
    return lista;
}

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
    //struct zespolone Y;
    ///Y.a=4;
    //Y.b=9;
    //wyswietl_liczbe_zespolona(Y);
    //struct zespolone X;
    //wczytaj(X);
    //wyswietl_liczbe_zespolona(X);


    ///DODATKOWE
    printf("\n\n CWDODATKOWE\n\n");
   //struct zespolone X;
   //X.a=5;
   // X.b=2;
    //struct zespolone wynik;
    //wynik=iloczyn(X,Y);
    //wyswietl_liczbe_zespolona(wynik);

    ///7.2.10
    printf("\n\n CW7_2_10\n\n");
    //struct wiele_int X;
    //union super_int Y;'
    //printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof(unsigned int));
    ///struktura
    //printf("%d\n",sizeof(X));
    //printf("%p\n",X);
    //printf("%p\n",X.i);
    //printf("%p\n",X.u);
    ///Unia
    //printf("%d\n",sizeof(Y));
    //printf("%p\n",Y);
    //printf("%p\n",Y.i);
    //printf("%p\n",Y.u);

    ///7.3.1 i 2
    printf("\n\n CW7_3_1\n\n");

    ///lista bez glowy
    ///Cw nie mam pojecia ktore juz bo sie zgubilem
    struct element *lista=utworz();
    //lista=dodajnakoniec(lista,4);
    //wypiszlista(lista);
    //lista=dodajnakoniec(lista,15);
    //wypiszlista(lista);
    //lista=dodajnakoniec(lista,3);
    //wypiszlista(lista);
    //lista=dodajnakoniec(lista,8);
    //wypiszlista(lista);
    //lista=dodajnakoniec(lista,10);
    //wypiszlista(lista);
    lista=dodajnapoczatek(lista,6);
    wypiszlista(lista);
    lista=dodajnakoniec(lista,1);
    wypiszlista(lista);
    ///7.3.5
    printf("\n\n CW7_3_5\n\n");
    //dodajodpowiednio
    ///7.3.6
    printf("\n\n CW7_3_6\n\n");
    ///znajdz
    
    ///7.3.7
    printf("\n\n CW7_3_7\n\n");
    //usun
    
    ///7.3.8
    printf("\n\n CW7_3_8\n\n");
    //usunwybrany
    
    ///7.3.9
    printf("\n\n CW7_3_9\n\n");
    
    ///Z GLOWOM TERAZ BEDZIE
    
    ///7.3.10
    printf("\n\n CW7_3_10 i 11 i 12 i 13 i 14 tez xD\n\n");
    
    
    return 0;
}
