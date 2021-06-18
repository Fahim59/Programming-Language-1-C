#include<stdio.h>
int deletion(int a[5],int *index);
int find(int a[5]);
int main()
{
    int i,a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    find(a);
    return 0;
}
int find(int a[5])
{
    int index=0,i;
    for(i=0;i<5;i++)
    {
        if(a[i]==50)
        {
            index=i;
        }
    }
    deletion(a,&index);
}
int deletion(int a[5],int *index)
{
    int i;
    for(i=*index;i<5;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<4;i++)
    {printf("%d",a[i]);}
}

