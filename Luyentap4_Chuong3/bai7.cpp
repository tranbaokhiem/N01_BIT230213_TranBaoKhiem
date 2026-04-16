#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap so (1-100): ");
        scanf("%d", &n);

        if (n < 1 || n > 100)
            printf("Sai, nhap lai!\n");

    } while (n < 1 || n > 100);

    printf("Ban da nhap dung: %d", n);

    return 0;
}