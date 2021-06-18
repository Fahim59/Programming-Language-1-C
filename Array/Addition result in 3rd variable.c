#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i,sum=0;
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
    scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=a[i]+b[i];
        c[i]=sum;
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d\n",c[i]);
    }
}
