#include<stdio.h>
void main()
{
    int day;
    float fine;
    scanf("%d",&day);
    if (day<=5)
        {fine=day*0.50;
    printf("%f",fine);}
    if (day>=6&&day<=10)
        {fine=day*1;
    printf("%f",fine);}
    if (day>10&&day<=30)
        {fine=day*5;
    printf("%f",fine);}
    if (day>30)
    printf("Membership canceled");
}
