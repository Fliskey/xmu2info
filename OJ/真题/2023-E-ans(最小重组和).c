#include <stdio.h>

int main() {
    char raw[5];
    scanf("%s", raw);
    int list[4];
    for (int i = 0; i < 4; i++) {
        list[i] = raw[i] - '0';
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    int min_rebuild_sum = list[2] + list[3] + 10 * (list[0] + list[1]);
    printf("%d", min_rebuild_sum);
}