#include <stdio.h>
#include <math.h>
#include <windows.h>


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char ch[2];

    printf("Введите ch: ");
    scanf_s("%s", &ch, 2);

    /*
    1 - + или * или -
    2 – [ или ]
    3 - 0
    4 – все остальные
    */
    switch (ch[0])
    {
        case '+':
            goto link;
            break;
        case '*':
            goto link;
            break;
        case '-':
            goto link;
            break;
        case '[':
            goto link_2;
            break;
        case ']':
            goto link_2;
            break;
        case '0':
            return 0;
        default:
            goto link_4;
            return 404;
    }

    link: { // first
    double x, y, z;
    printf("Введите x: ");
    scanf_s("%lf", &x);

    printf("Введите y: ");
    scanf_s("%lf", &y);

    printf("Введите z: ");
    scanf_s("%lf", &z);

    if (y > 0) {
        if (x != -z) {
            double result = ((exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z))) + pow(pow(x, 6) + pow(log(y), 2), 1. / 3.);
            printf("%.3lf", result);
            return 0;
        }
        else {
            printf("ERROR OPERATION!\n");
            return 0;
        }

    }
    else {
        printf("ERROR OPERATION!\n");
        return 0;
    }
    }

    link_2: { // second
    double x = -0.02235, y = 2.23, z = 15.221;
    double result = ((exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z))) + pow(pow(x, 6) + pow(log(y), 2), 1. / 3.);
    printf("%.3lf", result);
    return 0;
    }

    link_4: { // fourth
    double x, y, z;
    printf("Введите x: ");
    scanf_s("%lf", &x);

    printf("Введите y: ");
    scanf_s("%lf", &y);

    printf("Введите z: ");
    scanf_s("%lf", &z);
    
    if (y > 0) {
        if (x != -z)
            return 0;
        return 700;
    }
    return 700;
    }
}
