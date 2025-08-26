//19.Calculate area of a circle.A =22/7 * R * R
#include<stdio.h>
int main()
{
    float a=0,r=0,d=0;
    int choice;
    
    printf("With what do you want to find your area?\n");
    printf("\n1) With Radius?");
    printf("\n2) With Diameter?\n\n\t Choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1: printf("\nEnter radius of the circle , r :");
                scanf("%f",&r);
                a=3.14*r*r;
                printf("Area of the circle with radius r:%f is A:%f",r,a);
                break;
        
        case 2 : printf("\nEnter diameter of the circle , d :");
                scanf("%f",&d);
                a=0.785*d*d;
                 printf("Area of the circle with diameterd:%f is A:%f",d,a);
                 break;
        
        default: printf("\nInvalid choice!!\nPlease enter valid choice[1 to 2].");
                break;
    }
    
    return 0;
}
