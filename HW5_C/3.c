#include <stdio.h>

struct Move { //структура move для координат.
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n) { // функция getFinishPoint суть которой заключается в расчете финальной точки пребывания.
    struct Move final = {0, 0};
    for (int i = 0; i < n; i++) {
        final.x += arr[i].x;
        final.y += arr[i].y;
    }
    return final;
}

int main() {
    int n;
    scanf("Moves: %d", &n);
    struct Move moves[n];
    for (int i = 0; i < n; i++) { //цикл для ввода значений координат.
        printf("Coords: %d: ", i + 1);
        scanf("%d %d", &moves[i].x, &moves[i].y);
    }
    struct Move final = getFinishPoint(moves, n); //возвращаем и используем получившуюся координату из функции getFinishPoint.
    printf("Final: (%d, %d)\n", final.x, final.y);
    return 0;
}