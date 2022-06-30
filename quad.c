//quadratic euqution
#include<stdio.h>
#include<math.h>
void main()
    {
    //variable declaration
    float a,b,c,r1,r2,d,rpart,ipart,di;
    printf("enter the coefficients");
    scanf("%f%f%f",&a,&b,&c);
    if(a!=0)
    {
        d=(b*b)-4*(a*c);
        if(d==0)
        {
           r1=(-b)/2*a;
           r2=r1;
           printf("the roots are equal r1=%f and r2=%f",r1,r2);
        }
        else if(d>0)
        {
            r1=(-b+sqrt(d)/2*a);
            r2=(-b-sqrt(d)/2*a);
            printf("the roots are real and distinct r1=%f and r2=%f",r1,r2);
        }
        else if(d<0)
        {
            rpart=(-b)/2*a;
            ipart=sqrt(-b)/2*a;
            printf("the roots are imaginary %f+i %f",rpart,ipart);
        }
    }
    else
        {
            printf("it is not a quadratic euation");
        } 
} 

