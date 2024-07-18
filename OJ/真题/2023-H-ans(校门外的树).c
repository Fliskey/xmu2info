#include <stdio.h>

#define MAX_NUM 10001

int main() {
    int tree[MAX_NUM] = {0};
    int l, m;
    int ans = 0;

    scanf("%d %d", &l, &m);
    for (int i = 1; i <= m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++) {
            if (!tree[j]) {
                tree[j] = 1;
                ans++;
            }
        }
    }
    ans = l - ans + 1;
    printf("%d", ans);
    return 0;
}
