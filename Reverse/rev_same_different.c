#include<stdio.h>
void main()
{
    int digit,a,b,c,d,e,f,g,h,rev=0;
    scanf("%d",&digit);
    a=digit/10000;
    b=digit%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    rev=((h*10000)+(g*1000)+(e*100)+(c*10)+(a*1));
    if (rev==digit)
    printf("the number is equal");
    else
        printf("the number is not equal");
}
