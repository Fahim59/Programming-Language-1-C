#include <stdio.h>
int deletion (int a[5]);
    void main()
{int a[5],i,index;
    for (i=0;i<5;i++)
      {
      scanf("%d",&a[i]);
      }
deletion (a);}
int deletion (int a[5])
      {   int i,index;
          for(i=0;i<5;i++)
          {
              if(a[i]==25)
              {
                  index=i;
              }
          }
          for (i=index;i<5;i++)
          {
              a[i]=a[i+1];
          }
          for(i=0;i<4;i++)
          {
              printf("%d\n",a[i]);
          }
      }
