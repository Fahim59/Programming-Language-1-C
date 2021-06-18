#include <stdio.h>
void main()
{int id,digit;
scanf("%d",&id);
digit=id%100;
if (digit==24)
   printf("MD");
else if (digit==35)
    printf("DMD");
else if (digit==68)
    printf("Executive");
else
    printf("invalid");
}
