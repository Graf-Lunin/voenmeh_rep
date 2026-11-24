#include <stdio.h>


int gcd(int a, int b)
{
    while (b != 0)
	{
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


int main(void)
{
    int A, B;
    if (scanf("%d %d", &A, &B) != 2)
	{
        printf("Input error\n");
        return 1;
    }
    if (A <= 0 || B <= 0)
	{
        printf("A and B must be natural numbers\n");
        return 1;
    }

    if (gcd(A, B) == 1)
        printf("%d and %d are coprime\n", A, B);
    else
        printf("%d and %d are NOT coprime\n", A, B);

    return 0;
}
