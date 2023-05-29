#include <stdio.h>

void arrayShift(int arr[], int num, int shift) { //функция  для циклического сдвига массива.
    int temp[num];
    int i;
    for ( i = 0; i < num; i++ ) {
        temp[( i + shift ) % num] = arr[i];
    }
    for (i = 0; i < num; i++) {
        arr[i] = temp[i];
    }
}

int main() {  //суть решения в том, чтобы разделить массив на пополам и провести циклический сдвиг.
    int num, i=0;
    scanf("%d", &num);
    int arr[num], shift = num/2;
    while (i<num) {
        scanf("%d", &arr[i]);
        i++;
    }
    arrayShift(arr, num, shift);
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    } 
    return 0;
}