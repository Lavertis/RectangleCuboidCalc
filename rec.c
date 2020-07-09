#include <stdio.h>

double rec(double a, double b) { return a * b; }

void handleRec() {
    double a, b;
    int return1, return2;
    printf("Podaj długość 1 boku prostokąta: ");
    return1 = scanf("%lf", &a);
    printf("Podaj długość 2 boku prostokąta: ");
    return2 = scanf("%lf", &b);
    if (a <= 0 || b <= 0 || return1 == 0 || return2 == 0)
        printf("\nPodano niepoprawne dane\n");
    else
        printf("Pole prostokąta o wymiarach %.2lf x %.2lf wynosi %.2lf\n", a, b, rec(a, b));
}