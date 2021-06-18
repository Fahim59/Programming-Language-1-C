#include <stdio.h>

int main()
{
    int c,d,e;
    printf ("C:");
    scanf ("%d", &c);
    printf ("D:");
    scanf ("%d", &d);
    e=c;
    c=d;
    d=e;
    printf ("C: %d\nD: %d",c,d);
    return 0;
}
