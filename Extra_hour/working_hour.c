#include<stdio.h>
void main()
{int wh,eh,payment;
scanf("%d",&wh);
if (wh>40)
{eh=wh-40;
payment=eh*700;
printf("%d",payment);}
else
    printf("no payment");
}

