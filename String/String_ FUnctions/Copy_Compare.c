//Write a program that will copy a string in a different character array which is empty
//and compare with the original one. Do not use string function. Hints: function main(), copy(), compare()
#include<stdio.h>
int copy(char a[30]);
int compare (char a[30],char b[30]);
int main()
{
    char a[30]="White snow";
    copy(a);
    return 0;
}
int copy(char a[30])
{
    int i;
    char b[30];
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("b=%s\n",b);
    compare(a,b);
}
int compare(char a[30], char b[30])
{int i, len=0, len1=0, count=0;
 for(i=0 ; a[i]!='\0' ; i++)
 {
     len++;
 }
 for(i=0 ; b[i]!='\0' ; i++)
 {
     len1++;
 }
 for(i=0 ; a[i]!='\0' ; i++)
 {
     if(b[i]==a[i])
     {
         count++;
     }
 }
 if(count==len1&&len==len1)
    printf("Equal");
 else printf("Not equal");

}
