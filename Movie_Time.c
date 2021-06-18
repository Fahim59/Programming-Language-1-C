#include<stdio.h>
void main()
{
    printf("Available time:\n");
    printf("9AM-12PM\n");
    printf("1PM-4PM\n");
    printf("5PM-8PM\n");
    printf("9PM-12AM\n");

    int n;
    printf("Enter your choice : ");
    scanf("%d",&n);

    switch(n)
   {
    case 1: printf("Morning Show");break;

    case 2: printf("Afternoon Show");break;

    case 3: printf("Evening Show");break;

    case 4: printf("Night Show");}
}
