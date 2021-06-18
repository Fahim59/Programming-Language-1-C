#include<stdio.h>
void main()
{
    struct employee
    {
        char name[30];
        int id;
        int salary;
    };
    struct employee e[3];
    int i,avg=0,sum=0;
    for(i=0;i<3;i++)
    {
        scanf("%s%d%d",&e[i].name,&e[i].id,&e[i].salary);
    }
    for(i=0;i<3;i++)
    {
        sum=sum+e[i].salary;
    }
      avg=sum/3;
      printf("%d",avg);
}
