#include<stdio.h>
int length(char A[100], char B[100]);
int compare(int len, int len1);
int main()
{char A[100]="White Winter";
 char B[100]="Winter";
 len(A, B);
}
int len(char A[100], char B[100])
{int i, len=0, len1=0;
    for(i=0 ; A[i]!='\0' ; i++)
 {
     len++;
 }
  for(i=0 ; B[i]!='\0' ; i++)
 {
     len1++;
 }
 compare(len, len1);
}
int compare(int len, int len1)
{   printf("A=%d\nB=%d\n", len, len1);
    if(len==len1)
    {
        printf("Equal");
    }
 else printf("Not Equal");
}

