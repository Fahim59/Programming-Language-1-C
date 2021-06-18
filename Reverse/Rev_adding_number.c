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
    rev=((a+1)*10000+(c+1)*1000+(e+1)*100+(g+1)*10+(h+1)*1);
    printf("%d",rev);
}
