#include <stdio.h>

struct Move
{
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    int x = 0, y = 0;

    // считаем изменения координат
    for (int i = 0; i < n; i++) {
        x += arr[i].x;
        y += arr[i].y;
    }

    // по итогу получаем конечную позицию чертежника
    struct Move result = {x, y};
    return result;
}

int main() {
    struct Move array[4] = {
        {10, 10},
        {-15, -15}
    };

    struct Move result = getFinishPoint(array, 4);
    printf("%d %d\n", result.x, result.y);

    return 0;
}
