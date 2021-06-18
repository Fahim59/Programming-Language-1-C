#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            {printf("not prime");break;}
    }
        if(n==i)
            {printf("prime");}
}
