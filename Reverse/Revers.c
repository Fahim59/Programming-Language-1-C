#include<stdio.h>
void main()
{
    int digit,a,b,c,d,e,f,rev=0;
    Scanf("%d",&rev);
    a=digit/1000;
    b=digit%1000;
    c=b/100;
    d=b%100;
    e=d/10;
    f=d%10;
    rev=(f*1000)+(e*100)+(c*10)+(a*1);
    printf("%d",rev);
}
