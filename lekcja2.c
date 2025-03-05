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
*/
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
printf("%d",b);



return 0;}

