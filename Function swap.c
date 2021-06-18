#include<stdio.h>

void swapV(int *x,int *y)
{
    printf ("X: %d\nY: %d\nBefore swapping\n\n",*x,*y);
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf ("X: %d\nY: %d\nAfter swapping\n\n",*x,*y);
}
int main()
{
    int a=10,b=20;
    printf ("A: %d\nB: %d\nBefore Function Calling\n\n",a,b);
    swapV(&a,&b);
    printf ("A: %d\nB: %d\nAfter Function Calling\n",a,b);
}
