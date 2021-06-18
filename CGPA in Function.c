#include<stdio.h>

int Cgpa(int y)
{
    float marks = y;
    if (marks>=100 && marks<=90)
        printf ("A+");
    else
    {
        if (marks>=85 && marks<= 89.9)
        printf ("You got A");
        else
        {
            if (marks>=80 && marks<=84.9)
                printf ("You got B+");
            else
            {
                if (marks>= 75 && marks<=79.9)
                    printf ("You got B");
                else
                {
                    if (marks>=70 && marks<=74.9)
                        printf ("You got C+");
                    else
                    {
                        if (marks>=65 && marks<=69.9)
                            printf ("You got C");
                        else
                           {
                               if (marks>=60 && marks<=64.9)
                                printf ("You got D+");
                               else
                               {
                                   if (marks>=50 && marks<=59.9)
                                    printf ("You got D");
                                   else
                                    printf ("You got F");
                               }
                           }
                    }
                }
            }
        }
    }
    return marks;
}

int main ()

{
    float results;
    printf ("Enter Your Marks: ");
    scanf ("%f", &results);
    Cgpa(results);
}
