#include <stdio.h>
#include <stdlib.h>

int list[1004];

int cal(int n) {
    int ret = 0;
    while (n) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int cmp(const void *p1, const void *p2) {
    if (cal(*(int *) p1) == cal(*(int *) p2)) {
        return *(int *) p1 - *(int *) p2;
    }
    return cal(*(int *) p1) - cal(*(int *) p2);
}


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        list[i] = i;
    }
    qsort(list + 1, n, sizeof(int), cmp);
    printf("%d", list[m]);
    return 0;
}
