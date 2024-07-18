#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d=", num);
    int is_first = 1;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            num /= i;
            if (is_first) {
                is_first = 0;
            } else {
                printf("*");
            }
            printf("%d", i);
        }
    }
    return 0;
}
