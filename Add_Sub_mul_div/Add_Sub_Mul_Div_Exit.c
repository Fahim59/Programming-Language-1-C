#include<stdio.h>
void main()
{
    float a,b,sum=0;
    char c;
    scanf("%f %f %c",&a,&b,&c);
    switch(c)
    {case 'a': (sum=a+b);
    printf("%f",sum);break;
    case 'b': (sum=a-b);
    printf("%f",sum);break;
    case 'c': (sum=a*b);
    printf("%f",sum);break;
    case 'd': (sum=a/b);
    printf("%f",sum);break;
    case 'e':
    printf("Exit");}
}
