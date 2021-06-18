#include<stdio.h>
int addition(int a[3],int b[3]);
int main()
{
    int a[3],b[3],i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    addition(a,b);
    return 0;
}
int addition(int a[3],int b[3])
{
    int i,*x,*y,c[3];
    x=&a[0];
    y=&b[0];
    for(i=0;i<3;i++)
    {
        c[i]=*x+*y;
        x++;
        y++;
        printf("%d\t",c[i]);
    }

}
