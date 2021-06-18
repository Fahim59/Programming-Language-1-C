#include<stdio.h>
int addition(int a[2][3],int b[2][3]);
int odd (int c[2][3]);
int main()
{
    int a[2][3],b[2][3],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    addition(a,b);
    return 0;
}
int addition(int a[2][3],int b[2][3])
{
    int i,j,c[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\n",c[i][j]);
        }
    }
    odd(c);
}
int odd(int c[2][3])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(c[i][j]%2!=0)
                printf("%d\n",c[i][j]);
        }
    }
}
