#include<stdio.h>
int check(int year);
int main()
{
    int i,year;
    for(i=0;i<3;i++)
    {
        scanf("%d",&year);
        check(year);
    }

    return 0;
}
int check(int year)
{
    int i,count,count1;
    {
        if ((year%4==0&&year%100!=0)||(year%400==0))

         {
            printf("Leap Year\n");
            count++;
         }
        else
         {
            printf("Not a leap Year\n");
            count1++;
         }
    }
}
