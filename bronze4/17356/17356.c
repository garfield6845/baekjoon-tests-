#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double m;
    m = (b - a) / 400;
    double d = pow(10, m);
    printf("%lf", 1 / (1 + d));

}