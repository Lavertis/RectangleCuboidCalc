#include <stdio.h>
#include "librec.h"
#include "libcub.h"

int main() {
    printf("Co chcesz obliczyć:\n");
    printf("1. Pole prostokąta\n");
    printf("2. Objętość prostopadłościanu\n");
    printf("0. Wyjdź z programu\n");
    int choice = getchar();

    switch (choice) {
        case '1':
            handleRec();
            break;
        case '2':
            handleCub();
            break;
        case '0':
            break;
        default:
            printf("Błędny wybór, koniec programu.\n");
    }
    return 0;
}
