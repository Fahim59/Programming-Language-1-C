#include <stdio.h>

int main()
{
    float radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of a circle = %f\n", area);
}
