#include<stdio.h>
void main()
{
    int a[2][3],i,j,max=0,index,index1;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        max=a[0][0];
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                if (max<a[i][j])
                {
                    max=a[i][j];
                    index=i;
                    index1=j;
                }
            }
        }
    printf("%d\n%d\t%d",max,index,index1);
}
