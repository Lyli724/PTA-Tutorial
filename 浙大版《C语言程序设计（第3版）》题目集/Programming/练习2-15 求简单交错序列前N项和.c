//
// Created by Acmer_ly on 2020/3/12.
//练习2-15 求简单交错序列前N项和 (15分)
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    double sum = 0;
    int j = 1;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / (double)j;
        } else {
            sum += 1.0 / (double)j;
        }
        j += 3;
    }
    printf("sum = %.3lf\n", sum);
    return 0;
}


