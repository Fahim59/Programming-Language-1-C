#include<stdio.h>
int maximum(int a[5]);
int deletion(int b[5],int index);
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        {scanf("%d",&a[i]);}
    maximum(a);
    return 0;
}
int maximum (int a[5])
{int i,index=0,max;
max=a[0];
for(i=0;i<5;i++)
{
    if (max<a[i])
        {
        max=a[i];
        index=i;
        }
}
deletion (a,index);
}
int deletion(int b[5],int index)
{
    int i;
    for(i=index;i<5;i++)
    {
        b[i]=b[i+1];
    }
    for(i=0;i<4;i++)
    printf("\t%d\n",b[i]);
}



