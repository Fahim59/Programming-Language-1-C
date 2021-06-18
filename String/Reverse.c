#include<stdio.h>
#include<string.h>
void main()
{
    char p[10]="Green BD";
    char q[10];
    int  len=0,i,j;
    for(i=0;p[i]!='\0';i++)
    {
        len ++;
    }
    j=len-1;
    for(i=0;i<len;i++)
    {
        q[i]=p[j];
        j--;
    }
    q[i]='\0';
    puts(q);
}
