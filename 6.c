#include <stdio.h>

int abs_arr(int arr[], int n) {
    // cursor - указатель на первый элемент в массиве
    int *cursor = arr, count = 0;

    // проходимся по массиву и если элемент < 0, то заменяем его модулем
    // и добавляем +1 к count
    for (int i = 0; i < n; i++) {
        if (*cursor < 0) {
            *cursor = 0 - *cursor;
            count += 1;
        }
        // прибавляем +1 к указателю, чтобы перейти на следующий
        // элемент массива
        cursor++;
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    // считываем массив
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // печатаем кол-во замен
    printf("%d ", abs_arr(array, n));

    // печатаем исправленный массив
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
