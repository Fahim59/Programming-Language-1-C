#include<stdio.h>

int swap(int *x,int *y)
{
    printf ("X: %d\tY: %d\nBefore swapping\n\n",*x,*y);
    int z;
    z = *x;
    *x = *y;
    *y = z;
    printf ("X: %d\tY: %d\nAfter swapping\n\n",*x,*y);
}

int main ()

{
    int a,b;
    printf ("Enter the value of a & b: ");
    scanf ("%d %d",&a,&b);
    printf ("A: %d\tB: %d\nBefore function calling\n\n",a,b);
    printf ("Address:\nA: %u\tB: %u\n\n",&a,&b);
    swap(&a,&b);
    printf ("A: %d\tB: %d\nBefore function calling\n\n",a,b);
}
