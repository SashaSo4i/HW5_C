#include <stdio.h>

int absArr(int* arr, int n) { //функция для замены отриц числа на его модуль + счетчик.
    int *p_arr = arr;
    int count = 0;
    while (p_arr < arr + n) {
        if (*p_arr < 0) {
            *p_arr = -*p_arr;
            count++;
        }
        p_arr++;
    }
    return count;
}

void printArr(int* arr, int n) { //функция вывода массива.
    int *p_arr = arr;
    while (p_arr < arr + n) {
        printf("%d ", *p_arr);
        p_arr++;
    }
    printf("\n");
}

int main() { //суть программы в прогоне через массив и замены отриц числа на его модуль.
    int n, count;
    int *p_count = &count;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    count = absArr(arr, n);
    absArr(arr, n);
    printArr(arr, n);
    printf("%d", count);
    
    return 0;
} 