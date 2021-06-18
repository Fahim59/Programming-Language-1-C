#include<stdio.h>
void main()
{
    int col,row,level,n=0;
    scanf("%d",&level);
    {for(col=1;col<=level;col++)
    {for (row=1;row<=col;row++)
    {
        n++;
    printf("%d",n);}
    printf("\n");}
    }
}

