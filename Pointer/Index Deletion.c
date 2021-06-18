#include<stdio.h>
int deletion(int a[20], int *p);
int main()
{
    int a[20],i,index=5,*p;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&index);
    p=index;
    delete(a,&p);
}
int delete(int a[20],int *p)
{
    int i;
    for(i=*p;i<20;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<19;i++)
    {
        printf("%d\n",a[i]);
    }
}
