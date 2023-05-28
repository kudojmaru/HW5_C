#include <stdio.h>

int main () {
    int n, dop, arr[101];

    // считываем массив
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        // сохраняем одно из чисел массива в доп переменную
        dop = arr[i];
        // заменяем элемент из первой половины на вторую половину
        arr[i] = arr[i + n / 2];
        arr[i + n / 2] = dop;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
