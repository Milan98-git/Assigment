#include <stdio.h>
void main()
{
    int a, b, lcm = 0;
    printf("enter the first and second number");
    scanf("%d %d", &a, &b);
    lcm = a > b ? a : b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("lcm of %d and %d is %d", a, b, lcm);
            break;
        }
        lcm++;
    }
}
