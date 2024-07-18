#include <stdio.h>

int list[1004];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    int l = 0, r = n - 1;
    int h = 0;
    int ans = 0;
    while (l < r) {
        h++;
        while (list[l] < h && l < r) {
            l++;
        }
        while (list[r] < h && l < r) {
            r--;
        }
        ans = ans > h * (r - l) ? ans : h * (r - l);
    }
    printf("%d", ans);
    return 0;
}
