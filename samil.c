#include<stdio.h>
#include<math.h>
void main()
{
int num1,num2,y=0,sum=0,ans=0,num,c,a=0,z=0,q,d,m=0;
printf("input 1st number, 2nd number and base respectedly\n");
scanf("%d%d%d",&num1,&num2,&c);
num=num1;
while(num1>0)
{
y=y*10+(c-1);
num1=num1/10;
}
sum=y-num2+1;
printf("%d complement of %d is %d\n",c-1,num2,sum-1);
printf("%d complement of %d is %d\n",c,num2,sum);
while(num>0)
{
    q=num%10;
    d=sum%10;
    if(q+d+m>c-1)
    {
        z=q+d-c+m;
        m=1;
    }
    else
    {
        z=q+d+m;
        m=0;
    }
    ans=ans*10+z;
    num=num/10;
    sum=sum/10;

}

printf("subtract is %d",ans);
}
