//Write a program that will take a 1D array as
//input and find out the numbers divisible by 5 and with the
//numbers a new 1D array will be created. Print the numbers in reverse order.
//Your array is R[15]. Functions: main (), div(), reverse()
#include<stdio.h>
int division(int R[15]);
int reverse (int S[15],int div);
int main()
{
    int R[15],i;
    for(i=0;i<15;i++)
    {
        scanf("%d",&R[i]);
    }
    division(R);
    return 0;
}
int division(int R[15])
{
    int div=0,i,S[15],j=0;
    for(i=0;i<15;i++)
    {
        if (R[i]%5==0)
        {
            S[j]=R[i];
            j++;
            div++;
        }
    }
    reverse (S,div);
}
int reverse (int S[15],int div)
{
    int j;
    for(j=div-1;j>=0;j--)
    {
        printf("%d\n",S[j]);
    }
}


