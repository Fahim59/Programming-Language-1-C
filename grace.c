#include<stdio.h>
void main()
{
    int class,sub;
    scanf("%d%d",&class,&sub);
    switch (class)
    {case 1: if (sub>3)
                printf ("no grace");
                else printf ("%d",sub*5);break;
    case 2: if (sub>2)
                printf ("no grace");
                else printf("%d",sub*4);break;
    case 3: if (sub>1)
                printf("no grace");
                else printf("%d,sub*5");break;}
}
