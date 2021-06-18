#include<stdio.h>
int main()
{
    int a,b;
    char option,cont;
do {
    printf("Enter your choice (+,-,/,*):");
    scanf("%c",&option);

    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    if (option=='+')
    {
        int sum= a+b;
        printf("The sum is: %d", sum);
    }
    else if (option=='-')
    {
        int sub=a-b;
        printf("The subtraction is:%d",sub);
    }
     else if (option=='*')
        {
            int multiply= a*b;
            printf ("The multiplication is:%d",multiply);
        }
        else if(option=='/')
        {
            float dvd= a/b;
            printf ("The division is:%f",dvd);
        }
    printf("\nDo you want to continue (Y/N)?:");
    scanf(" %c",&cont);
} while (cont=='Y' || cont== 'y');
    return 0;
}
