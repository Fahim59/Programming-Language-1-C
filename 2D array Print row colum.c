#include<stdio.h>
int main ()
{
    int i, j;
        for (i=0;i<5;i++)
        {
            for (j=0;j<=i-j;j++)
            {
                if(i==j)
                   printf ("       *    \n");
            }
            printf ("      ***    ");
        }

            printf ("\n");

}
