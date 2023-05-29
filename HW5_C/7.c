#include <stdio.h>
//на самом деле довольно простая задачка. По сути все что нужно сделать, это буквально использовать рекуррентное соотношение. (О КАК ПО УМНОМУ ЗАГОВОРИЛ ЕМААА). 
int main() { //dp i = dp i-1 + dp i-2 + dp i-n
    int n, answer;
    scanf("%d", &n);

    int dp[35][2];
    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }

    answer = dp[n][0] + dp[n][1];
    printf("%d", answer);

    return 0;
}