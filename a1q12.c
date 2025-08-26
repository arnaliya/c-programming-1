// Convert kilograms to grams
#include<stdio.h>
int main()
{
    float g=0,kg=0;
    printf("Enter kilograms :");
    scanf("%f",&kg);
    
    g=1000*kg;
    printf("Kilograms to grams:%f g",g);
    
    return 0;
}
