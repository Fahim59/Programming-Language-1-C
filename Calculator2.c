#include<stdio.h>
int main()
{
    float a,b;
    char option,cont;
do
    {
    printf("Enter your choice (+,-,/,*):");
    scanf("%c",&option);

    printf("Enter two numbers:");
    scanf("%f %f", &a,&b);

   switch (option)
    {
    case '+' :
      {
        float sum = a+b;
        printf("The sum is: %f", sum);
        break;
      }
    case '-' :
        {
        float sub = a-b;
        printf("The subtraction is:%f",sub);
        break;
        }
    case '*':
        {
        float multiply= a*b;
        printf ("The multiplication is:%f",multiply);
        break;
        }

    case '/':
        {
        float dvd= a/b;
        printf ("The division is:%f",dvd);
        break;
        }
    default :
        printf ("Invalid choice");
    }
    printf("\nDo you want to continue (Y/N)?:");
    scanf(" %c",&cont);
} while (cont=='Y' || cont== 'y');
    return 0;
}
