#include<stdio.h>
void main()
{
    int a[5],max=50,i,index=0;
    for(i=0;i<5;i++)
    {scanf("%d",&a[i]);}

    for(i=0;i<5;i++)
    {
        if(max==a[i])
        {
           index=i;
        }
    }
    a[index]=25;
    for(i=0;i<5;i++)
    {printf("%d\n",a[i]);}
}
