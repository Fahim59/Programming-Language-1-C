#include<stdio.h>
#include<string.h>
int main()
{
    char p[10]="Fahim";
    char q[10]="Faysal"; //if p=q then equal or not equal.
    {
        if(strcmp (p,q)==0)
            printf("Equal");
        else
            printf("Not equal");
    }
}
