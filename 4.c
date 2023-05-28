#include <stdio.h>

void reduce_fraction(int * a, int * b) {
    int max_del;

    // ищем минимальное число
    if (*a < *b) {
        max_del = *a;
    } else {
        max_del = *b;
    }

    // цикл проверяет с наибольшего делителя
    for (int i = max_del; i > 0; i--) {
        // сокращаем числа и прерываем цикл, если делитель найден
        if (*a % i == 0 && *b % i == 0) {
            *a = *a / i;
            *b = *b / i;
            break;
        }
    }
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    reduce_fraction(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}
