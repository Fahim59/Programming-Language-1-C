#include<stdio.h>
int addition(int *p,int *q);
int main()
{
    int p,q;
    scanf("%d%d",&p,&q);
    addition(&p,&q);
    return 0;
}
int addition(int *p,int *q)
{
    int sum=0;
    sum=*p+*q;
    printf("%d",sum);
}
