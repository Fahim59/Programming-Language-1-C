#include<stdio.h>
int maximum(int a[5]);
int minimum(int b[5]);
int difference(int *index,int *index1);
int main()
{
    int i,a[5],index,index1;
    for(i=0;i<5;i++)
    {scanf("%d",&a[i]);}
    index=maximum(a);
    index1=minimum(a);
    difference(&index,&index1);
    return 0;
}
int maximum (int a[5])
{
    int i,max,index=0;
    max=a[0];
    for(i=0;i<5;i++)
    {
        if (max<a[i])
        {
            max=a[i];
            index=i;
        }
    }
    printf("%d\t",max);
    printf("%d\t",index);
    return index;
}
int minimum (int b[5])
{
    int i,min,index1=0;
    for(i=0;i<5;i++)
    {
        if (min>b[i])
        {
            min=b[i];
            index1=i;
        }
    }
    printf("\t%d",min);
    printf("\t%d",index1);
    return index1;
}
int difference (int *index,int *index1)
{
    int d;
    d=*index-*index1;
    printf("\n%d",d);
}
