#include <stdio.h>

int main()
{
  float sub1, sub2, sub3, sub4, sub5;
  sub1 = 84.5;
  sub2 = 93;
  sub3 = 91;
  sub4 = 77.5;
  sub5 = 83;
  float total = sub1+sub2+sub3+sub4+sub5;
  printf ("Total Marks: %f\n", total);
  float average = total/5.0;
  printf ("Average: %f", average);
  return 0 ;
}
