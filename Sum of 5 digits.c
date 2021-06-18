#include<stdio.h>
int main ()
{
int  a,n,sum=0;
printf( "5 digit Number: ");
scanf ("%d", & n);
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
n=n/10;
sum=sum+a;
a=n%10;
sum=sum+a;
printf ("sum: %d",sum);
}
