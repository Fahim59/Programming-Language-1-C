#include<stdio.h>
void main()
{
    struct student
    {
        char name;
        int id;
        float marks;
    };
    struct student s[3];
    int i,sum=0,avg=0;
    for(i=0;i<3;i++)
    {
        scanf("%s%d%f",&s[i].name,&s[i].id,&s[i].marks);
    }
    for(i=0;i<3;i++)
    {
        sum=sum+s[i].marks;
    }
    avg=sum/3;
    printf("%d",avg);
}
