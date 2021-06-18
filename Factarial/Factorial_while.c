#include<stdio.h>
void main()
{
    int i,n,fact=1;
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);
}
