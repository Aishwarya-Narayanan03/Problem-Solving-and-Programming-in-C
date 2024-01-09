#include<stdio.h>

void main()
{
    int n, i;
	printf("Enter the Number: ");
    scanf("%d", &n);
	printf("\nPrime Factors are: %d", n);
	for (i = 2; i <= n; ++i)
    {
        if (n % i == 0)
        {
            printf(" %d", i);
            n = n / i;
            i--;

            if (n == 1)
                break;
        }
    }
}

