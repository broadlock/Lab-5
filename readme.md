# Домашнее задание (работа 5)

Условие:
Создать программу вычисления указанной величины. Результат проверить при заданных исходных значениях.

```math
w = | \cos x - \cos y |^{(1 + 2 \sin^2 y)} \left( 1 + z + \frac{z^2}{2} + \frac{z^3}{3} + \frac{z^4}{4} \right)
```

# 1. **Алгоритм**

1. **Начало**
2. Вычисление тригонометрических функций:
- sin(y)
- cos(x)
- cos(y)
3. Вычисление модуля разности:
```math
|\cos(x) - \cos(y)|
```
4. Вычисление показателя степени: 
```math
1 + 2 \cdot \sin^2 (y)
```
5. Вычисление первой части:
```math
|\cos(x) - \cos(y)|^{(1 + 2 \cdot \sin^2(y))}
```
6. Вычисление степеней z:  z², z³, z⁴
7. Вычисление второй части:
```math
1 + z + \frac{z^2}{2} + \frac{z^3}{3} + \frac{z^4}{4}
```
8. Вычисление результата: w = первая_часть * вторая_часть
9. **Конец**

**Блок-Схема**

<img width="712" height="1121" alt="Lab5 drawio" src="https://github.com/user-attachments/assets/3b325b56-4aae-4961-8cd5-08a709c13878" />

# 2. Реализация программы
```c
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
```

# 3. Результат работы программы

x = 4000.0  
y = -0.875000  
z = -0.000475  
cos(x) = -0.729947  
cos(y) = 0.640997  
| cos(x) - cos(y) | =  1.370944  
Первая часть = 1.988211  
Вторая часть = 0.999525  
Ответ: 1.9873  
(Вставлено из консоли)

# 4. Информация о Разработчике
Гаркин Алексей бИЦ - 251
