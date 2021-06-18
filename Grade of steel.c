#include<stdio.h>
void main()
{
    int hn,ts;
    float cc;
    scanf("%d %f %d",&hn,&cc,&ts);
    hn>=50;
    cc<=0.7;
    ts>=5600;
    if
        (hn>=50&&cc<=0.7&&ts>=5600)
        printf("grade 10");
    else if
        (hn>=50&&cc<=0.7)
        printf("grade 9");
    else if
        (cc<=0.7&&ts>=5600)
        printf("grade 8");
    else if
        (hn>=50&&ts>=5600)
        printf("grade 7");
    else if
        (hn>=50||cc<=0.7||ts>=5600)
        printf("grade 6");
    else
        printf("grade 5");

}
