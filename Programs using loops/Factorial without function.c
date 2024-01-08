#include<stdio.h>
void main()
{ 
 int i,n,factorial;
 printf("\nEnter the number:");
 scanf("%d",&n);
 factorial = 1;
 for(i=1;i<=n;i++)
   factorial = factorial*i;
 printf("\nFactorial of %d is %d",n,factorial);
}
