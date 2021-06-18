#include<stdio.h>
int calculate (int wh);
int main()
{
    int wh,i;
    for(i=0;i<=15;i++)
    {
        scanf("%d",&wh);
        calculate (wh);
        return 0;
    }
}
int calculate (int wh)
{
    int eh,payment;
        if(wh>40)
        {
            eh=wh-40;
            payment=eh*700;
            printf("%d",payment);
        }
        else
        {
            printf("No payment");
        }
}
