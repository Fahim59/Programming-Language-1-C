#include<stdio.h>
#include<string.h>
void main()
{
    char a[30]="Bangladesh";
    int i,length=0;
    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    printf("%d\n",length);
}
