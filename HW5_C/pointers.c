# include <stdio.h>

void swap_1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap_2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int str_len1(char *s) {
    int i = 0;
    for (i; *(s + i) != '\0'; i++) {
        ; 
    }
    return i;
}

int str_len2(char *s) {
    int i;
    for (i = 0; *s != '\0'; i++, s++) {
        ; 
    }
    return i;
}

void print_arr(int *arr3, int size) {
    int *p = arr3 + size;
    for(;arr3 < p; arr3++){
        printf("%d ", *arr3);
    }
}

int main() {
    int num = 116;
    int *p_num = &num;

    printf("%d \n", *p_num);
    
    *p_num = 332;

    printf("%d\n ", *p_num);
    printf("%p\n ", p_num);

    int *p_num1 = &num;
    int *p_num2 = &num;
    
    int d1 = 7, d2 = 11;
    swap_1(d1, d2);
    swap_2(&d1, &d2);
    printf("d1 = %d, d2 = %d\n", d1, d2);

    short arr[9] = {1,2,3,4,5,6,7,8,9};
    *arr,    *(arr + 2),    *(arr + 6);

    printf("%d \n", &arr);

    short* p_arr = arr;

    for(int i = 0; i < 9; i++) {
        printf("%d ", p_arr[i]);
    }
    printf("\n");

    int arr1[5] = {1,2,3,4,5};
    int *p_arr1 = arr + 2;
    printf("p_arr1[-1] = %d \n", p_arr[-1]);

    #define SIZE 10
    int arr3[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int *p1 = arr, *p2 = arr + 4;
    if (p1 < p2) {
        printf("zapups!\n");
    }

    print_arr(arr3, SIZE);
    return 0;
}