#include <stdio.h>
#include <math.h>

#define INT_MAX 0x7fffffff

int main() {
    int x;
    int min_sub = INT_MAX;
    scanf("%d", &x);
    for (int num = x + 1; num <= x + 2; num++) {
        for (int i = ceil(sqrt(num)); i <= num; i++) {
            if (num % i == 0) {
                if (i - num / i < min_sub) {
                    min_sub = i - num / i;
                    break;
                }
            }
        }
    }
    printf("%d", min_sub);
    return 0;
}