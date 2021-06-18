#include<stdio.h>
void main()
{
    int eh,wh,p,i;
    for(i=1;i<=20;i++)
        {scanf("%d",&wh);
    eh=wh-40;
    p=eh*700;
    if (wh>40)
        printf("%d",p);
    else
        printf("No payment");
        }

}
