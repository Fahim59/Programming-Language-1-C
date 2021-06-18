#include<stdio.h>
void main()
{
    int id,year,sem,i;
    for(i=1;i<=15;i++)
    {
        scanf("%d",&id);
        year=id/1000000;
        sem=id%10;
        printf("%d\n",year);
        if
            (sem==1)
            printf("Spring");
        if
            (sem==2)
            printf("Summer");
        if  (sem==3)
            printf("Fall");
    }
}
