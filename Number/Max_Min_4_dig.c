#include<stdio.h>
void main()
{
 int a,b,c,d;
 printf("Enter 4 numbers=");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b && a>c && a>d)
  printf("Maximum number is %d\n",a);
 else if(b>a && b>c && b>d)
  printf("Maximum number is %d\n",b);
  else if (c>a && c>b && c>d)
    printf("Maximum is %d\n",c);
 else
   printf("Maximum number is %d\n",d);
 if(a<b && a<c && a<d)
  printf("Minimum number is %d\n",a);
 else if(b<a && b<c && b<d)
  printf("Minimum number is %d\n",b);
  else if(c<a && c<b && c<d)
    printf("Minimum number is %d\n",c);
 else
   printf("Minimum number is %d\n",d);
}
