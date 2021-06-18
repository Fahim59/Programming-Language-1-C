#include<stdio.h>
#include<string.h>
void main()
{
    char p[25]="Fahim+";
    char q[25]="Lorin";
    int len=0,len1=0,length,i,j;
    for(i=0;p[i]!='\0';i++)
    {
        len ++;
    }
    for(i=0;q[i]!='\0';i++)
    {
        len1++;
    }
    length=len+len1;
    i=len;
    for(j=0;j<len1;j++)
    {
        p[i]=q[j];
        i++;
    }
    p[length]='\0';
    puts(p);
}
