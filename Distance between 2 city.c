#include <stdio.h>

int main ()
{
    float distance, distance_in_meter, distance_in_cm;
    printf ("Distance:");
    scanf ("%f",&distance);
    distance_in_meter = distance*1000;
    printf ("Distance_in_Meter: %f", distance_in_meter);
    distance_in_cm = distance_in_meter*100;
    printf("\nDistance in CM: %f ", distance_in_cm);
    return 0;
}
