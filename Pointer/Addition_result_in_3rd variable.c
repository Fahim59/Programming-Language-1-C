#include<stdio.h>
int add(int *p,int *q);
void main()
{
int A[2][3],B[2][3],i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
{ scanf("%d",&A[i][j]);}}
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)

{ scanf("%d",&B[i][j]);}}

add(&A[0][0],&B[0][0]);
}
int add(int *p,int *q)
{
int i,j,c[2][3];
for(i=0;i<2;i++)
{
  for(j=0;j<3;j++)
{c[i][j]=*p+*q;
printf("%d ",c[i][j]);
*p++;
*q++;}}
}
