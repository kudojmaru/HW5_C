#include <stdio.h>

struct Person
{
    int age;
    char name[30];
};

float averageAge(struct Person arr[], int n) {
    float middle, count = 0, sum = 0;

    // заполняем соответсвующие переменные
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
        count++;
    }
    // вычисляем среднее значение возраста
    middle = sum / count;

    return middle;
}

int main () {
    struct Person array[3] = {
        {15, "Ignat"},
        {30, "Vova"},
        {17, "Columb"}
    };

    printf("%f\n", averageAge(array, 3));
    return 0;
}
