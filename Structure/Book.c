#include<stdio.h>
void main()
{
    struct book
    {
     char author[30];
     int page;
     float price;
    };
    struct book b[2];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%s%d%f",&b[i].author,&b[i].page,&b[i].price);

        printf("%s\n%d\n%f",b[i].author,b[i].page,b[i].price);
    }
}
