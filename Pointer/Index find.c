#include<stdio.h>
int find(int a[2][3],int *index);
int main()
{
    int i,j,index,a[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&index);
    find(a,&index);
    return 0;
}
int find (int a[2][3],int *index)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if (a[i][j]==*index)
                printf("%d\n%d",i,j);
        }
    }
}
