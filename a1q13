//Convert bytes into KB, MB and GB.
#include<stdio.h>
int main()
{
    float b,kb,mb;
    long double gb;
    int choice;
    printf("\nEnter bytes :");
    scanf("%f",&b);
    
    printf("\nEnter below choice:");
    printf("\n1) Convert into Kilobytes(KB)");
    printf("\n2) Convert into Megabytes(MB)");
    printf("\n3) Convert into Gigabytes(GB)\n\t Choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1: kb=0.001*b;
                printf("\nbytes to KB is:%f KB",kb);
        case 2: mb=0.000001*b;
                printf("\nbytes to MB is:%f MB",mb);
        case 3: gb=0.000000001*b;
                printf("\nbytes to GB is:%Lf GB",gb);
    }
    
    return 0;
}
