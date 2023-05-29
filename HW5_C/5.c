#include <stdio.h>
//я официально ненавижу эту задачу. Как и с 8 из прошлого ДЗ я почувствовал себя дебилом. Спасибо Иван Геннадьевич!
void read_matrix(int n, int m, int arr[][m]) { // функция для запроса матрицы у пользователя.
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void swap_cols(int n, int m, int arr[][m], int col1, int col2) { // функция для перестановки столбцов.
    int temp;
    for (int i = 0; i < n; i++) {
        temp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = temp;
    }
}

int min_sum_col(int n, int m, int arr[][m]) { // функция для нахождения столбца с наименьшей суммой элементов.
    int min_col = 0, min_sum = 0;
    for (int j = 0; j < m; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += arr[i][j];
        }
        if (j == 0 || col_sum < min_sum) {
            min_col = j;
            min_sum = col_sum;
        }
    }
    return min_col;
}

int max_sum_col(int n, int m, int arr[][m]) { // функция для нахождения столбца с наибольшей суммой элементов.
    int max_col = 0, max_sum = 0;
    for (int j = 0; j < m; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++) {
            col_sum += arr[i][j];
        }
        if (j == 0 || col_sum > max_sum) {
            max_col = j;
            max_sum = col_sum;
        }
    }
    return max_col;
}

void print_matrix(int n, int m, int arr[][m], char* msg) { // функция для вывода матрицы на экран.
    printf("%s\n", msg);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    scanf("Enter matrix weight n on m: %d %d", &n, &m);

    int arr[n][m];
    read_matrix(n, m, arr);

    int min_col = min_sum_col(n, m, arr);
    int max_col = max_sum_col(n, m, arr);

    if (min_col != max_col) { // проверка необходимости перестановки столбцов
        swap_cols(n, m, arr, min_col, max_col);
        print_matrix(n, m, arr);
    }
    else {
        print_matrix(n, m, arr);
    }

    return 0;
}
