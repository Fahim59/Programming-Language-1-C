#include<stdio.h>

int main()
{
    int array[30];
    int a;
    int sum=0;
    int avg;

    for (a=0;a<30;a++)
    {
        printf ("Array[%d]: ",a);
        scanf ("%d",&array[a]);
    }
    for (a=0;a<30;a++)
    {
        sum= sum+array[a];
    }
    printf ("\nSum:%d\n",sum);

    avg = sum/30;

    printf ("Average:%d",avg);

}
