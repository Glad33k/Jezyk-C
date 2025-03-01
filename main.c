#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b<-1)
    {
       if(a<-1)
           printf("%dx%dy=%d",a,b,c);
       else
            if(a==-1)
            printf("-x%dy=%d",b,c);
            else
                    if(a==0)
                printf("%dy=%d",b,c);
                    else
                        if(a==1)
                        printf("x%dy=%d",b,c);
                    else
                            printf("%dx%dy=%d",a,b,c);
    }
    if(b==-1)
    {
       if(a<-1)
           printf("%dx-y=%d",a,c);
       else
            if(a==-1)
            printf("-x-y=%d",c);
            else
                    if(a==0)
                printf("-y=%d",c);
                    else
                        if(a==1)
                        printf("x-y=%d",c);
                    else
                            printf("%dx-y=%d",a,b,c);
    }
    if(b==0)
    {
       if(a<-1)
           printf("%dx=%d",a,c);
       else
            if(a==-1)
            printf("-x=%d",c);
            else
                    if(a==0)
                    {
                        if(c==0)
                            printf("0=0");
                        else
                            printf("0 nie moze rownac sie %d",c);
                    }
                    else
                        if(a==1)
                        printf("x=%d",c);
                    else
                            printf("%dx=%d",a,c);
    }
        if(b==1)
    {
       if(a<-1)
           printf("%dx+y=%d",a,c);
       else
            if(a==-1)
            printf("-x+y=%d",c);
            else
                    if(a==0)
                printf("y=%d",c);
                    else
                        if(a==1)
                        printf("x+y=%d",c);
                    else
                            printf("%dx+y=%d",a,c);
    }
    if(b>1)
    {
       if(a<-1)
           printf("%dx+%dy=%d",a,b,c);
       else
            if(a==-1)
            printf("-x+%dy=%d",b,c);
            else
                    if(a==0)
                printf("%dy=%d",b,c);
                    else
                        if(a==1)
                        printf("x+%dy=%d",b,c);
                    else
                            printf("%dx+%dy=%d",a,b,c);
    }



    return 0;
}
