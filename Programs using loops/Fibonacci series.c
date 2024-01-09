#include<stdio.h>
void main()
{
	int first,second,sum,num,counter=0;
	printf("Enter the term:");
	scanf("%d",&num);
	printf("\nEnter the First Number:");
	scanf("%d",&first);
	printf("\nEnter the Second Number:");
	scanf("%d",&second);
	printf("\nFibonacci Series:%d%d",first,second);
	while(counter<num)
	{
		sum=first+second;
		printf("%d",sum);
		first=second;
		second=sum;
		counter++;
	}
}
