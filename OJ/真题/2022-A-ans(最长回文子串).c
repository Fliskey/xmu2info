#include <stdio.h>
#include <string.h>

char str[3004];
int ans_index;
int max_len = -1;

void expend(int l, int r) {
    while (l >= 0 && r < strlen(str) && str[l] == str[r]) {
        l--;
        r++;
    }
    l++;
    r--;
    int len = r - l + 1;
    if (len > max_len) {
        max_len = len;
        ans_index = l;
    }
}

int main() {
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        expend(i, i);
        expend(i, i + 1);
    }
    str[ans_index + max_len] = 0;
    printf("%s", str + ans_index);
    return 0;
}
