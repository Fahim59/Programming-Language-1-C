#include<stdio.h>
void main()
{
    struct employee
    {
        char name[30];
        int id;
        float sy;
    };
    struct employee e[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%s%d%f",&e[i].name,&e[i].id,&e[i].sy);
    }
    for(i=0;i<3;i++)
    {
        if(e[i].sy>7)
            printf("\nPromotion");
        else
            printf("\nNo promotion");
    }
}

