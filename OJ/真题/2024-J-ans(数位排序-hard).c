#include <stdio.h>

char val[1000001];
int list[55][60000];
int count[55];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        val[i] = val[i / 10] + i % 10;
        list[val[i]][count[val[i]]++] = i;
    }
    int t = 0;
    while (m > count[t]) {
        m -= count[t];
        t++;
    }
    printf("%d", list[t][m - 1]);
    return 0;
}
