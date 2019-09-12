#include<stdio.h>
#include<math.h>
#define MAX 20
 
float equation(float x,float y)
{
    return(x+(y*y));
 
}
 
 
void main(){
    int i=0,count=-1;
    float lower,upper,h,y1,xvalue[MAX],yvalue[MAX];
    float function[MAX],final;
    float search,y4;
    printf("ADAM-BASHFORTH METHOD ");
    printf("\n");
    printf("\nEnter the lower bound of x  :  ");
    scanf("%f",&lower);
    printf("\nEnter the upper bound of x  :  ");
    scanf("%f",&upper);
    printf("\nEnter the value of h        :  ");
    scanf("%f",&h);
   printf("\nEnter the value of x for which you want to find y :");
    scanf("%f",&search);
    xvalue[i]=lower;
    for(i=0;xvalue[i]<=upper;i++)
    {
        xvalue[i+1]=xvalue[i]+h;
    }
     printf("enter the values of y for corresponding values of x\n");
      for(i=0;xvalue[i]<=upper;i++)
    {
       
        scanf("%f",&yvalue[i]);
    }
    printf("\n\n");
    printf("The table is   ");
    printf("\n\n");
    printf(" i     x       y      f(x,y)   ");
    printf("\n\n");
    for(i=0;xvalue[i]<=upper;i++)
    {
        function[i]=equation(xvalue[i],yvalue[i]);
        printf(" %d.  %.4f  %.4f  %.4f ",i,xvalue[i],yvalue[i],function[i]);
        count=count+1;
        printf("\n");
    }
     y4=yvalue[count]+(h/24)*((-9*function[count-3])+(37*function[count-2])-(59*function[count-1])+(55*function[count]));
    final=equation(xvalue[count]+h,y4);
    y4=yvalue[count]+(h/24)*((function[count-2])-(5*function[count-1])+(19*function[count])+(9*final));
     final=equation(xvalue[count]+h,y4);
       y4=yvalue[count]+(h/24)*((function[count-2])-(5*function[count-1])+(19*function[count])+(9*final));
    printf("\n\n");
    printf("Approximate value at %f :  %.4f  ",(xvalue[count]+h),y4);
}
