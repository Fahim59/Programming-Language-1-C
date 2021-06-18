#include<stdio.h>
void main()
{
    int a,b,n,sum=0;
    scanf("%d%d%d",&a,&b,&n);
    switch (n)
   {
    case 1: sum=a+b;
    printf("%d",sum);break;
    case 2: sum=a-b;
    printf("%d",sum);break;
    case 3: sum=a*b;
    printf("%d",sum);break;
    case 4: sum=a/b;
    printf("%d",sum);break;
    default: printf("%d","invalid");
   }
}
