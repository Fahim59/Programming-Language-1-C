#include<stdio.h>
int main ()
{
int  a,n,sum=0;
printf( "4 digit Number: ");
scanf ("%d", & n);
a=n/1000;
sum=sum+a;
a=n%10;
sum=sum+a;
printf ("\aSum: %d",sum);
}
