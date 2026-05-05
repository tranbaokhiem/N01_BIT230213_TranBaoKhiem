#include <stdio.h>

int main() {
    printf("Cac so thoa man:\n");

    for (int i = 10; i <= 99; i++) {
        int a = i / 10;
        int b = i % 10;

        if (a * b == 2 * (a + b)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
