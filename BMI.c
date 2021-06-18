#include<stdio.h>
int main ()
{
    float h,w,hh,bmi;
    printf ("Enter a number for H:");
    scanf ("%f", & h);
    printf ("Enter a number for W:");
    scanf ("%f", & w);
    hh = h*h;
    bmi = w/hh;
    printf("BMI: %f\n",bmi);
    if (bmi>=40)
        printf ("Morbidly Obese");
    else
    {
        if (bmi>= 30 && bmi<= 39.9)
        printf ("Obese");
        else
        {
            if (bmi>=25 && bmi<=29.9)
                printf ("Overweight");
            else
            {
                if (bmi>= 18.6 && bmi<=24.9)
                    printf ("Ideal");
                else
                {
                    if (bmi>=17.6 && bmi<=18.5)
                        printf ("Underweight");
                    else
                    {
                        if (bmi>=15.1 && bmi<=17.5)
                            printf ("Anorexic");
                        else
                           printf ("Starvation");
                    }
                }
            }
        }
    }
}
