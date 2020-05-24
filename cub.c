#include <stdio.h>

double cub(double a, double b, double h) { return a * b * h; }

void handleCub()
{
    double a, b, h;
    printf("Podaj długość krawędzi nr 1: ");
    scanf("%lf", &a);
    printf("Podaj długość krawędzi nr 2: ");
    scanf("%lf", &b);
    printf("Podaj wysokość: ");
    scanf("%lf", &h);
    printf("Objętość prostopadłościanu o wymiarach %.2lf x %.2lf x %.2lf wynosi %.2lf\n", a, b, h, cub(a, b, h));
}