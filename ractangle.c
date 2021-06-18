#include<stdio.h>
void main()
{
    float radius,area,perimeter,pie=3.1416;
    scanf("%f",&radius);
    area=2*radius*radius;
    perimeter=2*pie*radius;
    printf("%f\n%f",area,perimeter);
}
