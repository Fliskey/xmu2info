#include <stdio.h>
#include <string.h>

#define MAX_ANS_LEN 1004
#define MAX_INPUT_LEN 34

char ans[MAX_ANS_LEN];

char *handle(char *str, int times) {
    strcpy(ans, str);
    while (times--) {
        char temp[MAX_ANS_LEN];
        int idx = 0;
        int len = strlen(ans);
        for (int i = 0; i < len; i++) {
            int count = 1;
            while (i != len - 1 && ans[i] == ans[i + 1]) {
                count++;
                i++;
            }
            sprintf(temp + idx, "%d%c", count, ans[i]);
            idx++;
            while (count) {
                idx++;
                count /= 10;
            }
        }
        strcpy(ans, temp);
    }
    return ans;
}

int main() {
    char str[MAX_INPUT_LEN];
    int times;
    scanf("%s %d", str, &times);
    char *result = handle(str, times);
    printf("%s", result);
    return 0;
}
