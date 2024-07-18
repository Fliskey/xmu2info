#include <stdio.h>

int reverse(int n) {
    int ret = 0;
    while (n) {
        ret *= 10;
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == reverse(n)) {
        printf("%d", n);
    } else {
        while (n != reverse(n)) {
            printf("%d+%d=%d\n", n, reverse(n), n + reverse(n));
            n = n + reverse(n);
        }
    }
    return 0;
}