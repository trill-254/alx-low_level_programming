#include <stdio.h>

void print_fibonacci(int n);

int main(void)
{
    print_fibonacci(98);
    return (0);
}

void print_fibonacci(int n)
{
    int a = 1, b = 2;

    printf("%d, %d", a, b);

    for (int i = 3; i <= n; ++i)
    {
        int next = a + b;
        printf(", %d", next);

        a = b;
        b = next;
    }

    printf("\n");
}
