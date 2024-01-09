#include<stdio.h>

void main()
{
    int bin = 1, p, q = 0, r, x;

    // User input for the number of rows
    printf("Rows you want to print: ");
    scanf("%d", &r);

    printf("\nPascal's:");

    // Outer loop controls the number of rows
    while (q < r)
    {
        // Loop for spacing before the numbers
        for (p = 40 - 3 * q; p > 0; --p)
            printf(" ");

        // Inner loop calculates and prints binomial coefficients
        for (x = 0; x <= q; ++x)
        {
            if ((x == 0) || (q == 0))
                bin = 1;
            else
                bin = (bin * (q - x + 1)) / x;

            printf("%6d", bin);
        }

        printf("\n");
        ++q;
    }
}


