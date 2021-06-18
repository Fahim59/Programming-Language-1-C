//Write a program that will take 2D array as input and find out the numbers greater than 50 and odd numbers.
//With the numbers a new 2D array will be created. Your array is A[3][5]. Functions: main() greater()
#include<stdio.h>
int greater(int a[2][3]);
int main()
{
    int i,j,a[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    greater (a);
    return 0;
}
int greater (int a[2][3])
{
    int i,j,b[15],k=0,l=0; //l=how many times condition fulfilled||k=for new array
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>50&&a[i][j]%2!=0)
               {
                b[k]=a[i][j];
                l++;
                k++;
               }
        }
    }
        for(k=0;k<l;k++)
        {
            printf("%d\n",b[k]);
        }
}

