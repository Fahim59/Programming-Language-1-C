#include<stdio.h>
int reverse(char A[50]);
int compare(char A[50], char B[50]);
int main()
{char A[50] = "Mustafiz is Great";
 puts(A);
 reverse(A);
}
int reverse(char A[50])
{char B[50];
 int i, len=0;
 for(i=0 ; A[i]!='\0' ; i++)
 {
     len++;
 }
 for(i=0 ; i<=len ; i++)
 {
     B[i] = A[len-1-i];
 }
 puts(B);
 compare(A,B);
}
int compare(char A[50], char B[50])
{int i, len_A=0, len_B=0, count=0;
 for(i=0 ; A[i]!='\0' ; i++)
 {
     len_A++;
 }
 for(i=0 ; B[i]!='\0' ; i++)
 {
     len_B++;
 }
 for(i=0 ; A[i]!='\0' ; i++)
 {
     if(B[i]==A[i])
     {
         count++;
     }
 }
 if(count==len_B&&len_A==len_B)
    printf("A and B are equal");
 else printf("Not equal");

}
