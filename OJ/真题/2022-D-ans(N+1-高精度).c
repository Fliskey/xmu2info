#include <stdio.h>
#include <string.h>

int main() {
    char num[204];
    scanf("%s", num);
    int idx = strlen(num) - 1;
    num[idx]++;
    while (num[idx] > '9') {
        num[idx] -= 10;
        idx--;
        if (idx == -1) {
            break;
        }
        num[idx]++;
    }
    if (idx == -1) {
        printf("1");
    }
    printf("%s", num);
    return 0;
}