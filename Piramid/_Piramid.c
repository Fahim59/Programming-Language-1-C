#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf(" ");
        }
    for(j=1;j<=(n*2-(i*2-1));j++)
    {printf("*");}
    printf("\n");}
}
