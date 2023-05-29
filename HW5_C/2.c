#include <stdio.h>

struct Person { //Структура Person
    int age;
    char name[30];
};

float averageAge(struct Person arr[], int n) { // функция для подсчета среднего возраста всех подопытных
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
    }
    float answer = sum / n;
    return answer;
}

struct Person getPerson() { //Функция для учищения кода. Проще говоря это просто микро функция для ввода значений, после цикл будет принимать получившееся значение и загружать в массив.
    struct Person kent;
    printf("AGE: ");
    scanf("%d", &p.age);
    printf("NAME: ");
    scanf("%s", &p.name);
    return kent;
}

int main() { //
    int n;
    printf("PEOPLE: ");
    scanf("%d", &n);
    struct Person arr[n];
    for (int i = 0; i < n; i++) { //цикл для приема значений при помощи функции getPerson.
        arr[i] = getPerson();
    }

    averageAge(&arr, &n);
}    