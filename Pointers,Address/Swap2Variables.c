#include <stdio.h>

// Swap two nos

void swapByRef(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\nNew x : %d \nNew y : %d\n",*x,*y);
}

int main()
{
    int a,b;
    printf("Enter x : ");
    scanf("%d",&a);
    printf("Enter y : ");
    scanf("%d",&b);
    
    swapByRef(&a,&b);

    return 0;
}

