#include <stdio.h>

double cub(double a, double b, double h) { return a * b * h; }

void handleCub() {
    double a, b, h;
    int return1, return2, return3;
    printf("Podaj długość krawędzi nr 1: ");
    return1 = scanf("%lf", &a);
    printf("Podaj długość krawędzi nr 2: ");
    return2 = scanf("%lf", &b);
    printf("Podaj wysokość: ");
    return3 = scanf("%lf", &h);
    if (a <= 0 || b <= 0 || h <= 0 || return1 == 0 || return2 == 0 || return3 == 0)
        printf("\nPodano niepoprawne dane\n");
    else
        printf("Objętość prostopadłościanu o wymiarach %.2lf x %.2lf x %.2lf wynosi %.2lf\n", a, b, h, cub(a, b, h));
}