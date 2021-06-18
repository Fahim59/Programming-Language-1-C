#include <stdio.h>
/* average marks of 5 subjects*/
int main()
{
  int sub1, sub2, sub3, sub4, sub5,total,average;
  sub1 = 84;
  sub2 = 93;
  sub3 = 91;
  sub4 = 77;
  sub5 = 83;
  total = sub1+sub2+sub3+sub4+sub5;
  printf ("Total Marks: %d\n", total);
  average = total/5;
  printf ("Average: %d", average);
  return 0 ;
}
