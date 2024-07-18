#include <stdio.h>

int list[1004];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int h;
            if (list[i] < list[j]) {
                h = list[i];
            } else {
                h = list[j];
            }
            if (h * (j - i) > ans) {
                ans = h * (j - i);
            }
        }
    }
    printf("%d", ans);
    return 0;
}
