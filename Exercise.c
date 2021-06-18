#include<stdio.h>
int main ()
{
int  a,n,sum=0;
printf( "A4: ");
scanf ("%d", & n);
a=n/1000;
sum=sum+a;
a=n%10;
sum=sum+a;
printf ("Sum: %d",sum);
}
