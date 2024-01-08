#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter three numbers : ");
	scanf("%f,%f,%f", &a,&b,&c);
	if(a>b&&a>c)
	printf("Largest Number = %.2f",a);
	else if(b>a&&b>c)
	printf("Largest Number = %.2f",b);
	else
	printf("Largest Number = %.2f",c);
}
