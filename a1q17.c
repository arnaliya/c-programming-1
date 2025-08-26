//17.Calculate area and perimeter of square
#include<stdio.h>
int main()
{
    int l=0,a=0,p=0;
    printf("Enter length of the square , l :");
    scanf("%d",&l);
    
    a=l*l;
    p=4*l;
    
    printf("\nArea of the square of side l=%d is : %d",l,a);
    printf("\nPerimeter of the square of side l=%d is : %d",l,p);
    
    
    return 0;
}
