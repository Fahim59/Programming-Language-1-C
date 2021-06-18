#include <stdio.h>
void main()
{
    int id,year,sem;
    scanf("%d",&id);
    year=id/1000000;
    printf("%d",year);
    sem=id%10;
    if
        (sem==1)
    printf("Spring");
    if (sem==2)
    printf("Summer");
    if (sem==3)
    printf("Fall");

}
