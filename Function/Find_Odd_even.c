#include<stdio.h>
int even (int A[3][4]);
int odd (int B[3][4]);
int main()
{
    int a[3][4],i,j,x,y;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    x=odd(a);
    y=even(a);
    printf("%d\n%d",x,y);
    return 0;
}
int odd (int A[3][4])
{
    int i,j,c=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if (A[i][j]%2!=0)
                c++;
        }
    }
    return c;
}
int even (int B[3][4])
{
    int i,j,d=0;
    for(i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            if (B[i][j]%2==0)
                d++;
        }
    }
    return d;
}
