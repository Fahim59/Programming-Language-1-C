#include<stdio.h>
int swap(int *a,int*b);
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    return 0;
}
int swap(int*a,int*b)
{
    int c=0;
    c=*a;
    *a=*b;
    *b=c;
    printf("%d\t%d",*a,*b);
}
