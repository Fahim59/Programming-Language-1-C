#include<stdio.h>
int bigger (int a[5]);
int main ()
{   int i,a[5];
    for(i=0;i<5;i++)
    {scanf("%d",&a[i]);}
    bigger (a);
    return 0;
}
int bigger (int a[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        if (a[i]>10)

        {printf("%d\n",a[i]);}
    }
}
