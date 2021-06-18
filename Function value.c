#include<stdio.h>

int f(int x)
{
    if (x==0)
        return 1;
    else
        return f(x-1)+1;
}

int main ()
{
    printf ("Value of f(4): %d", f(4));
}
