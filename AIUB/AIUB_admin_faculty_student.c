#include<stdio.h>
void main()
{
    int id,digit,i;
    for(i=1;i<=18;i++)
    {printf("Enter the id number -");
    scanf("%d",&id);
    (digit=id/10000);
    if (digit==14)
        printf("ID of Admin \n" );
    else if (digit==10)
    printf("ID of Faculty\n");
    else if (digit==12)
        printf("ID of student\n");
    else
        printf("Invalid\n");
     }
}
