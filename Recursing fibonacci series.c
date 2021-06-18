#include<stdio.h>
 int fibonacci (int n)
 {
     if (n==0)
        return 0;
     else if (n==1)
        return 1;
     else
        return (fibonacci(n-1)+fibonacci(n-2));
 }

 int main()
 {
     int n, i=0,c;
     printf ("Number: ");
     scanf ("%d",&n);
     for (c=1;c<=n;c++)
     {
         printf ("%d\n",fibonacci(i));
         i++;
     }
 }
