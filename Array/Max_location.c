#include<stdio.h>
void main()
{
    int a[4],i,max,index=0;
    for (i=0;i<4;i++)
    {scanf("%d",&a[i]);}
    max=a[0];
    for (i=1;i<4;i++)
    {
        if (max<a[i])
            {max=a[i];
            index=i;}
    }
    printf("Max number is %d \n %d",max,index);

}
