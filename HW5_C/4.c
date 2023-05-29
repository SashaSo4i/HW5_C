#include <stdio.h>
#include <stdlib.h>

void reduce_fraction(int *a, int *b) { // функция для сокращения и нахождения gcd.
    if (*b == 0) {
        printf("divisor = 0\n");
        return;
    }
    int gcd = 1; //gcd - наибольший общий делитель.
    int abs_a = abs(*a);
    int abs_b = abs(*b);
    for (int i = 1; i <= abs_a && i <= abs_b; i++) { 
        if (abs_a % i == 0 && abs_b % i == 0) {
            gcd = i;
        }
    }
    *a /= gcd;
    *b /= gcd;
}

int main() {
    int a, b;
    printf("Enter numerator and divisor: ");
    scanf("%d %d", &a, &b);
    reduce_fraction(&a, &b);
    printf("Result: %d/%d\n", a, b);
    return 0;
}