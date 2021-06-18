#include<stdio.h>
void main()
{ int r,s,a;
scanf("%d%d%d",&r,&s,&a);
if(r<s&&r<a)
    printf("r is the youngest");
else if (s<r&&s<a)
    printf("s is the youngest");
else if (a<s&&a<r)
    printf("a is the youngest");
else
    printf ("they are same");
}
