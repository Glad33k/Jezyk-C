#include<stdio.h>
#include<math.h>
int main(){
/*
double a,b,c,d,e,f,W,Wx,Wy,x,y;
printf("Podaj wspolczynniki ukladu rownan:\n");
scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
printf("%f*x+%f*y=%f\n",a,b,c);
printf("%f*x+%f*y=%f\n",d,e,f);
W=a*e-b*d;
Wx=c*e-b*f;
Wy=a*f-d*c;
if(W==0)
{
    if(Wx==0 && Wy==0)
    {
        printf("Podany uklad jest nieoznaczony, ma nieskonczenie wiele rozwiazan\n");
    }
    else
    {
        printf("Podany uklad jest sprzeczny, brak rozwiazan");
    }
}
else
{
x=Wx/W;
y=Wy/W;
printf("Rozwiazaniem ukladu jest para liczb x=%f, y=%f",x,y);
}

double a,b,c,delta;
printf("Podaj wspolczynniki rownania:\n");
scanf("%lf %lf %lf",&a,&b,&c);
printf("%f*x^2+%f*x+%f=0 \n",a,b,c);
delta=b*b-4*a*c;
if(delta<0)
{
    printf("Brak rozwiazan rzeczywistych");
}
else if(delta==0)
{
    printf("Rownanie ma jedno rozwiazanie x=%f",-b/(2*a));
}
else
{
    printf("Rownanie ma 2 rozwaizanie x1=%f, x2=%f",(-b-sqrt(delta))/2*a,(-b+sqrt(delta))/2*a);
}

int w;
double a,b,h,p;
printf("Wybierz figure ktorej pole chcesz obliczyc 1-prostokat, 2-kwadrat,3-trojkat:\n");
scanf("%d",&w);
switch(w){
case 1:
    printf("Podaj boki prostokata :\n");
    scanf("%lf %lf",&a,&b);
    p=a*b;
    printf("Pole prostokata wynosi: %lf",p);
    break;
case 2:
    printf("Podaj bok kwadratu :\n");
    scanf("%lf",&a);
    p=a*a;
    printf("Pole kwadratu wynosi %lf",p);
    break;
case 3:
    printf("Podaj bok trojkata i wysokosc: \n");
    scanf("%lf %lf %lf",&a,&h);
    p=a*h/2;
    printf("Pole trojkata wynosi: %lf",p);
    break;}

int w;
double a,b;
printf("Wybierz operacje ktora chcesz wykonac: 1-dodawanie, 2-odejmowanie,3-mnozenie,4-dzielenie \n");
scanf("%d",&w);
switch(w){
case 1:
    printf("podaj 2 liczby: \n");
    scanf("%lf %lf",&a,&b);
    printf("Wynikiem dodawania tych liczb jest : %lf",a+b);
    break;
case 2:
    printf("podaj 2 liczby: \n");
    scanf("%lf %lf",&a,&b);
    printf("Wynikiem odejmowania tych liczb jest : %lf",a-b);
    break;
case 3:
    printf("podaj 2 liczby: \n");
    scanf("%lf %lf",&a,&b);
    printf("Wynikiem mnozenia tych liczb jest : %lf",a*b);
    break;
case 4:
    printf("podaj 2 liczby: \n");
    scanf("%lf %lf",&a,&b);
    if(b==0)
    {
        printf("Nie dziel przez 0 \n");
    }
    else{
    printf("Wynikiem dzielenia tych liczb jest : %lf",a/b);
    }
    break;
           }


int a,b,c,d,r,q;
scanf("%d %d %d",&a,&b,&c);

if(b<a){
d=a;
a=b;
b=d;}
if(c<b){
d=c;
c=b;
b=d;}
if(b<a){
d=a;
a=b;
b=d;}

r=b-a;
q=c-b;
if(r==q)
{
    printf("Podane liczby tworza ciag o roznicy %d",r);
}
else
{
    printf("Nie tworza ciagu");
}

///PETLE PIERWSZE

int i,n,m,k;
scanf("%d %d %d",&n,&m,&k);
for(i=n;i<m;i=i+n)
{
    printf("%d \n",i);
}
printf("\n\n\n");
for(i=1;i<=m;i++)
{
    printf("%d \n",i*n);
}
printf("\n\n\n");
for(i=1;i*n<=k;i++)
{
    if(i*n>m && i*n<k)
        printf("%d \n",i*n);
}


int i,a,b=1;
scanf("%d",&a);
for(i=1;i<=a;i++)
    b=b*i;
printf("%d \n \n \n \n",b);
b=0;
for(i=0;i<=a;i++)
    b=b+i*i;
printf("%d",b);

///1.4.6
int i,a,b=1;
scanf("%d", &a);
if(a<=2)
    printf("Musi byc wieksza od 2! \n");
else {
    for(i=2;i<=a;i=i+2)
    {
        b=i*b;
    }
    printf("%d",b);
}
//Zadanie dodatkowe
int i,a,b=1;
scanf("%d", &a);
if(a<=2)
    printf("Musi byc wieksza od 2! \n");
else {
    for(i=a;i>0;i=i-2)
    {
        b=i*b;
    }
    printf("%d",b);
}
///1.4.7
int i,a,b,c=1;
printf("Podaj 2 liczby, 1 musi byc mniejsza od 2: \n");
scanf("%d %d",&a,&b);
for(a;a<=b;a++)
   c=c*a;
printf("%d",c);
///1.4.8

int i,a,b=0,c=1,d;
scanf("%d",&a);
if(a==0)
{
    printf("%d",b);
}
else if(a==1)
{
    printf("%d",c);
}
else{
for(i=2;i<=a;i++)
{
    d=b+c;
    b=c;
    c=d;
}
printf("%d",d);
}
///1.4.9
int i,n,m,max=0;
scanf("%d %d",&n,&m);
for(i=1;i<=n;i++)
if(n%i==0 && m%i==0)
{
    printf("Dzielnik obu liczb to : %d \n",i);
        max=i;
}
printf("Najwiekszy wspolny dzielnik to : %d \n",max);

///1.4.10
int a,c,i;
double b;
scanf("%d",&a);
for(i=0;i<=sqrt(a);i++)
        c=i;
printf("%d",c);

///Wypisywanie liczb 1
int a,b,c,i=0;
scanf("%d",&a);
if(a>=2)
    printf("2\n");
for(b=3;b<a;b++){
    i=0;
for(c=2;c<b;c++){
    if(b%c==0)
    i++;
}
    if(i==0)
    printf("%d \n",b);
}
///Dodatkowe doskonale liczby
int i,n,m,max=0,a,b,c;
scanf("%d",&n);
for(b=2;b<n;b++){
    max=0;
for(c=1;c<b;c++){
if(b%c==0 )
{
    max=max+c;
}}
if(b==max)
{
    printf("liczba doskonala to: %d \n",b);
}
}
///1.4.11(A)
double a,b,c,d,odpo=0;
printf("Podaj wspolczynniki nierownosci:\n");
scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
a=abs(a);
printf("%f*x^2+%f*x+%f>%f \n",a,b,c,d);
for(int x=0;a*x*x+b*x+c<=d;x++)
    odpo++;
printf("Najmniejsza liczba spelniajaca to rownanie to: %f ",odpo);

///1.4.11(B)
double a,b,c,odpo=0;
printf("Podaj wspolczynniki nierownosci:\n");
scanf("%lf %lf %lf",&a,&b,&c);
printf("5*x^2+%f*x+%f<%f \n",a,b,c);
for(int x=0;5*x*x+a*x+b<c;x++)
    odpo=x;
printf("Najwieksza liczba spelniajaca to rownanie to: %f ",odpo);

///1.4.11(C)
double a,b,c,odpo=0;
printf("Podaj wspolczynniki nierownosci:\n");
scanf("%lf %lf %lf",&a,&b,&c);
printf("5*x^2+%f*x+%f<=%f \n",a,b,c);
for(int x=0;5*x*x+a*x+b<=c;x++)
    odpo=x;
printf("Najwieksza liczba spelniajaca to rownanie to: %f ",odpo);

///1.4.12
int n=1;
printf("Podaj liczbe: \n");
int a,b,i,m,max=0,l=0,s=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
    a=n;
    b=i;
    while(a*b!=0)
    {
        if(a<b)
        {
            b=b%a;
        }
        else
        {
            a=a%b;
        }
    }
    if((a==1)||(b==1))
    {
        s=s+i;
    }
}
printf("Suma wszystkich liczb wzglednie pierwszych to: %d",s);

///1.4.13
int n,suma=1;
int c=1;
printf("Podaj liczbe: \n");
scanf("%d",&n);
for(int x=1;x<=n;x++)
{
        c=c*x;
    suma=suma+c;
}
printf("Suma silni wynosi : %d",suma);
*/
///1.4.14
int n,a,b;

printf("Podaj liczbe: \n");
scanf("%d",&n);
for(int a=1;a<n;a++)
{
    for(int b=a;b<n;b++)
    for(int c=b;c<n;c++)
    {
    if(a*a+b*b==c*c)
    printf("To sa trojki pitagorejskie: %d,%d,%d \n",a,b,c);
    }
}

return 0;}

