#include <stdio.h>

int main() {
    char current;
    char next;
    char wait = 0;
    int counting_9 = 0;
    current = getchar();
    do {
        next = getchar();
        if (current != '9') {
            if (next != '9') {
                if (next == EOF) {
                    putchar(current + 1);
                } else {
                    putchar(current);
                }
            } else {
                wait = current;
            }
        } else {
            counting_9++;
            if (next == EOF) {
                if (wait != 0) {
                    putchar(wait + 1);
                } else {
                    putchar('1');
                }
                while (counting_9) {
                    putchar('0');
                    counting_9--;
                }
            } else if (next != '9') {
                if (wait != 0) {
                    putchar(wait);
                }
                while (counting_9) {
                    putchar('9');
                    counting_9--;
                }
            }
        }
        current = next;
    } while (next != EOF);
    return 0;
}