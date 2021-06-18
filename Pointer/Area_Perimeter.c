#include<stdio.h>
int area (int *r);
int peremeter(int *r);
int main()
{
    int r;
    scanf("%d",&r);
    area(&r);
    peremeter(&r);
    return 0;
}
int area(int *r)
{
    float ar,pi=3.1416;
    ar=pi*(*r)*(*r);
    printf("%f\n",ar);
}
int peremeter (int *r)
{
    float pere,pi=3.1416;
    pere=2*pi*(*r);
    printf("%f\n",pere);
}
