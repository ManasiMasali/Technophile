#include <stdio.h>

int GCD(int, int);
int LCM(int, int, int);

int main()
{
    int n1, n2, gcd, lcm;
    printf("Enter any 2 numbers:\n");
    scanf("%d %d", &n1, &n2);
    gcd = GCD(n1, n2);
    lcm = LCM(gcd, n1, n2);
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    return 0;
}

int GCD(int a, int b)
{
    int r = 0;
    while (a != 0)
    {
        r = b % a;
        b = a;
        a = r;
    }
    return b;
}

int LCM(int gcd, int a, int b)
{
    return (a * b / gcd);
}
