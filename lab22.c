// nr method using fixed point formula 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define g(x) 1/sqrt(1+x)
#define e 0.00001

void main(){
    float x1, x2, g1, error;
    printf("Enter the initial guess x1:");
    scanf("%f", &x1);
    printf("  x1\t            g(x)\t      x2\n");
    do{ 
        g1 = g(x1);
        x2 = g1;
        error = x2 - x1;
        x1 = x2;
       printf("\n%f\t  %f\t  %f\t",x1,g1,x2);
    }
  
    while (fabs(error)>e);
    printf("\n\n");
    printf("The required root is %f", x2);
    
}