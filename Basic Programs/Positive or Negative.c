#include<stdio.h>
void main()
{
	float num;
	printf("Enter a number: ");
	scanf("%f",&num);
	if(num<0)
	printf("%.2f is negative",num);
	else if(num>0)
	printf("%.2f is positive",num);
	else printf("You entered zero");
}
