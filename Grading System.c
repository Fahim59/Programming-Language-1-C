#include<stdio.h>
int main ()
{
    float marks;
    printf ("Enter Your Marks:");
    scanf ("%f", & marks);
        if (marks>=100 && marks<=90)
        printf ("A+");
    else
    {
        if (marks>=85 && marks<= 89.9)
        printf ("A");
        else
        {
            if (marks>=80 && marks<=84.9)
                printf ("B+");
            else
            {
                if (marks>= 75 && marks<=79.9)
                    printf ("B");
                else
                {
                    if (marks>=70 && marks<=74.9)
                        printf ("C+");
                    else
                    {
                        if (marks>=65 && marks<=69.9)
                            printf ("C");
                        else
                           {
                               if (marks>=60 && marks<=64.9)
                                printf ("D+");
                               else
                               {
                                   if (marks>=50 && marks<=59.9)
                                    printf ("D");
                                   else
                                    printf ("F");
                               }
                           }
                    }
                }
            }
        }
    }
}

