#include<stdio.h>
int max(int a[2][3]);
int main()
{
    int a[2][3],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {scanf("%d",&a[i][j]);}
        max(a);
        return 0;
    }
}
int max(int a[2][3])
{
    int i,j,max=0,index,index1;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            max=0;
        {
            if (max<a[i][j])
            {
                max=a[i][j];
                index=i;
                index1=j;
            }
        }
    }
    printf("%d\t%d",index,index1);
    replace(a,index,index1);
}
int replace(int a[2][3],int index,int index1)
{
    int i,j;
    a[index][index1]=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
     {printf("%d\n",a[i][j]);}
    }

}
