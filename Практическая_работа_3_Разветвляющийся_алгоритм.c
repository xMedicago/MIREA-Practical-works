#include <stdio.h>
#include <math.h>
#include <windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, z;

    printf("Введите x: ");
    scanf_s("%lf", &x);

    printf("Введите y: ");
    scanf_s("%lf", &y);

    printf("Введите z: ");
    scanf_s("%lf", &z);

    if ((fabs(x - y) * z + pow(x, 2) != 0)) {
        if (x >= -1) {
            if (x <= 1) {
                double result = 5 * atan(x) - 1. / 4. * acos(x) * ((x + 3 * fabs(x - y) + pow(x, 2)) / (fabs(x - y) * z + pow(x, 2)));
                printf("%.3lf", result);
            }
            else
                printf("ERROR!\n");
        }
        else
            printf("ERROR!\n");
    }
    else
        printf("ERROR!\n");

    return 0;
}
