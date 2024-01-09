#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer to find the multiplication table: ");
    scanf("%d", &n);

    int i;  // Declare i outside the loop

    for (i = 1; i <= 20; ++i)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}


