#include<stdio.h>
int main()
{ int n;
int factorial =1;
printf(" enter a non negative integer:");
scanf("%d",&n);
{ int i;
for(i=1; i<=n; i++)
factorial = factorial * i;
if(n>=0)
{printf("factorial=%d",factorial);}
else
{printf("invalid");}
}
return 0;

}
