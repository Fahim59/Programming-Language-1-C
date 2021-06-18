//Write a program which will take array of 10 elements and multiply 3 with each element.
//When the array will print the elements it will print in reverse order.
//There will be three functions: main(), array_new(), reverse()
#include<stdio.h>
int array_new (int a[10]);
int reverse (int b[10]);
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    array_new (a);
    return 0;
}
int array_new (int a[10])
{
    int i,b[10];
    for(i=0;i<10;i++)
    {
       b[i]=a[i]*3;
    }
    reverse (b);
}
int reverse (int b[10])
{
    int i;
    for(i=9;i>=0;i--)
    {
        printf("%d\n",b[i]);
    }
}

