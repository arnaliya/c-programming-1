//Convert dollars into pound where 1 $ =48 Rs.And 1 pound = 70 Rs.
#include<stdio.h>
int main()
{
    float usd=0,pounds=0;
    printf("Enter dollars :");
    scanf("%f",&usd);
    
    pounds=1.458333/usd;
    
    printf("Dollars to pounds is : %f",pounds);
    
    
    return 0;
}
