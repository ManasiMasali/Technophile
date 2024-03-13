#include <stdio.h>
#include <math.h>

void sinx(float);

int main() {
    float x;
    printf("Enter the value of x in degrees.\n");
    scanf("%f", &x);
    sinx(x);
    return 0;
}

void sinx(float x) {
    int i = 1, fact = 1;
    float sum = 0, term;
    float sign = 1, prev = 0;
    x = x *3.141592654/ 180;
    while (1)
    {
        prev = sum;
        term = pow(x, i) / fact;
        sum = sum + (term * sign);
        fact = fact * (i + 1) * (i + 2);
        sign = sign * (-1);
        if (fabs(sum - prev) < 0.0001)
        {
            break;
        }
        i = i + 2;
    }

    printf("sin(%f) = %f\n", x, sum);
}
