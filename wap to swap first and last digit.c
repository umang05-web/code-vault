#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    n = n - first * digits - last;
    n = n + last * digits + first;

    printf("Number after swapping: %d\n", n);

    return 0;
}