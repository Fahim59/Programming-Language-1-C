#include<stdio.h>
void main()
{
    int i,x;
    scanf("%d",&x);
    i=2;
    while(i<x)
    {
        if(x%i==0)
            {printf("not prime");break;}
        i++;
    }
    if (x==i)
    {printf("prime");}
}
