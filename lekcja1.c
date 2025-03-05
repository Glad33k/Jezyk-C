#include <stdio.h>
#include <math.h>
int main(){
///printf("Hello World\n");
///printf("Bardzo\nDlugi\nnapis\n");
///printf("Napis zawierajacy rozne dziwne znaczki // \\ \\ \$ \& %% \n");
///int liczba;
///scanf("%d",&liczba);
///printf("%d \n",liczba);
///double number;
///scanf("%lf",&number);
///printf("Liczba rzeczywista ktora wczytalem to %f \n",number);
///printf("Liczba ktora wczytalem to %f a liczba o 1 wieksza to %f a kwadrat to %f \n",number, number+1, number*number);
//int tak,moze,jasne;

//printf("Moje ulubione liczby to: \n");
//scanf("%d %d %d",&jasne, &tak, &moze);
///printf("To sa moje ulubione liczby: %d %d %d \n", jasne, tak, moze);
//printf("Srednia arytmetyczna to: %f", (jasne+tak+moze)/3.);
//double a;
//scanf("%lf",&a);
//printf("Pierwiastek z %lf to %lf \n",a,sqrt(a));
//float a,b,c;
//scanf("%d %d %d",&a, &b,&c);
//printf("Srednia harmoniczna to %f:", 3.0/(1.0/a+1.0/b+1.0/c));
//scanf("%f",&a);
//printf("Wartosc bezwgledna z %f to %f \n",a,fabs(a));
//printf("dokladnosc %.2f \n",a);
//printf("w notacji wykladniczej to %e \n",a);
//if(a>=0){
//    printf("%f \n",a);
//}
//else{
//    printf("%f \n",-a);
//}

//int a,b;
//scanf("%d %d",&a,&b);
//printf("%d", (a<0)?-a:a);
//if(a>b)
//printf("%d",a);
//else if (a<b)
    //printf("%d",b);
//else
//printf("%d",a);
//double b,c,d,e;
//int a;
//scanf("%d %d %d",&a,&b,&c);
//if( a>=b && a>=c)
//printf("%d",a);
//else if (b>=a && b>=c)
//printf("%d",b);
//else
   // printf("%d",c);
//if (fabs(a)>=fabs(b))
 //printf("%d",a);
//else
    //printf("%d",b);
/*printf("obliczyc Pole za pomoca Bokow=1 czy wysokoscia=2? \n");
scanf("%d",&a);
if(a==1)
{
    printf("Podaj dlugosci bokow : \n");
 scanf("%lf %lf %lf",&b,&c,&d) ;
 e=(b+c+d)/2;
 double g;
 g=sqrt(e*(e-b)*(e-c)*(e-d));
 printf("Pole wynosi = %f \n",g) ;
}
else if(a==2)
{
    printf("Podaj dlugosci podstawy i wysokosci \n");
    scanf("%lf %lf",&b,&c);
    printf("Pole wynosi %lf \n", b*c/2);
}
else
    printf("Wybierz 1 albo 2");
*/
int a,b,c,d,e,f;

scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if(a>0 && b>0)

if(a>0 && b>0 && a!=1 && b!=1 && a!=0 && b!=0)
    printf("%dx+%dy=%d \n",a,b,c);
if(a==1 && b==1)
    printf("x+y=%d \n",c);
else if (a==1 && b!=1)
    printf("x+%dy=%d \n",b,c);
    else if (a!=1 && b==1)
    printf("%dx+y=%d \n",a,c);
if(a==0 && b==0)
    printf("0=%d \n",c);
else if (a==0 && b!=0)
    printf("y=%d \n",b,c);
else if (a!=0 && b==0)
    printf("%dx=%d \n",a,c);
if(b<0)
    printf("%dx%dy=%d \n",a,b,c);





























































return 0;

}
