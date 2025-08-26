//23. calculate average of three subjects along with their total.

#include<stdio.h>
int main()
{
    int math,sci,ss,total=0,average=0;
    printf("\nenter marks in math:");
    scanf("%d",&math);
    printf("\nenter marks in science:");
    scanf("%d",&sci);
    printf("\nenter marks in social science:");
    scanf("%d",&ss);
    
    total=math+sci+ss;
    average=total/3;
    
    printf("\nYour total marks are : %d",total);
    printf("\nYour average is : %d",average);
    

    return 0;
    
}
