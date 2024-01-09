#include <stdio.h>
void main()
{
    int n1, n2, prod, gcd, lcm, m, i;
	printf("Enter the two numbers: ");
    scanf("%d%d", &n1, &n2);
	prod = n1 * n2;
	if (n1 > n2)
        m = n2;
    else
        m = n1;

    for (i = m; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    lcm = prod / gcd;

    printf("\nThe GCD is: %d", gcd);
    printf("\nThe LCM is: %d", lcm);
}


