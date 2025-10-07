#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
    // var 4 ((3%33)+1)

    double w, x, y, z;

    x = 4000.0;
    y = -0.875;
    z = -0.000475;

    // Вычисление первой части: |cosX - cosY|^(1+2sin^2 Y)
    double siny = sin(y);
    double cosx = cos(x);
    double cosy = cos(y);

    double module = fabs(cosx - cosy);


    double stepen = 1.0 + 2.0 * siny * siny;  

    double first_part = pow(module, stepen);

    // Вычисление второй части: (1 + z + z^2/2 + z^3/3 + z^4/4)
    double z2 = z * z;
    double z3 = z2 * z;
    double z4 = z3 * z;

    double sum = 1.0 + z + z2 / 2.0 + z3 / 3.0 + z4 / 4.0;

    // Вычисление конечной w
    w = first_part * sum;

    printf("x = %.1f\n", x);
    printf("y = %.6f\n", y);
    printf("z = %.6f\n", z);
    printf("cos(x) = %.6f\n", cosx);
    printf("cos(y) = %.6f\n", cosy);
    printf ("| cos(x) - cos(y) | = % .6f\n", module);
    printf("Первая часть = %.6f\n", first_part);
    printf("Вторая часть = %.6f\n", sum);
    printf("Ответ: %.4f\n", w);

    return 0;

}

