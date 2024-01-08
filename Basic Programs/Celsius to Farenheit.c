#include<stdio.h>
void main()
{
	float celsius,farenheit;
	printf("\n Enter temp in Celsius : ");
	scanf("%f",&celsius);
	farenheit = (1.8*celsius)+32;
	printf("\nTemperature in Farenheit : %f",farenheit);
}
