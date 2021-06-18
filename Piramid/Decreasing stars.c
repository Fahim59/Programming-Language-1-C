#include<stdio.h>
int main ()
{
    int i, j;
        for (i=0;i<7;i++)
        {
            for (j=6;j>=i;j--)
            {
                printf ("* ");
            }
            printf ("\n");
        }
}
