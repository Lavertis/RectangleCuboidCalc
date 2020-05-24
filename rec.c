#include <stdio.h>

double rec(double a, double b) { return a * b; }

void handleRec()
{
    double a, b;
    printf("Podaj długość 1 boku prostokąta: ");
    scanf("%lf", &a);
    printf("Podaj długość 2 boku prostokąta: ");
    scanf("%lf", &b);
    printf("Pole prostokąta o wymiarach %.2lf x %.2lf wynosi %.2lf\n", a, b, rec(a, b));
}