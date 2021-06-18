int rec(int P);
int main()
{int a, factorial;
 scanf("%d", &a);
 factorial=rec(a);
 printf("%d", factorial);
 return 0;
}
int rec(int P)
{int fact;
 if (P==1)
 {
     return 1;
 }
 else
 {
     fact=P*rec(P-1);
 }
 return (fact);
}
