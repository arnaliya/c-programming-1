// fahrenheit to celcius
#include<stdio.h>
int main()
{
    float c=0,f=0;
    printf("Enter Celcius, C:");
    scanf("%f",&c);
    
    f= (9/5 * c) + 32;
    
    printf("Celcius to Fahrenheit is : %f C --> %f F",c,f);
   
    
    return 0;
}
