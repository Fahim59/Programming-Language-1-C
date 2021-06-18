#include<stdio.h>
void main()
{
    int digit,a,b,c,d,e,f,g,h,sum=0;
    scanf("%d",&digit);
    a=digit/1000;
    b=digit%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    sum=f+a;
    printf("%d",sum);
}
