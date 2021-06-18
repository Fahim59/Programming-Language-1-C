#include<stdio.h>
#include<string.h>
void main()
{
    char a[25]="Bangladesh";
    char b[25];
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("b=%s",b);
}
