#include <stdio.h>

int main()
{
    float side, area;
    printf("Enter the length of side of equilateral triangle:");
    scanf("%f", &side);
    area = sqrt(3)/4 * side * side;
    printf("Area of triangle : %f\n", area);
    return 0;
}
