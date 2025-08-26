//interest calculator
#include<stdio.h>
int main()
{
    float i=0,p=0,r=0,n=0;
    printf("\nEnter Principle Amount, P:");
    scanf("%f",&p);
    printf("\nEnter Rate, r:");
    scanf("%f",&r);
    printf("\nEnter No. of years, N:");
    scanf("%f",&n);
    
    i=(p*r*n)/100;
    
    printf("\nInterest for %f Amount,\t at the rate of %f \t for %f years is, I: %f " ,p,r,n,i);
    
   
    
    return 0;
}
