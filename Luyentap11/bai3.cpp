#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    printf("Nhap N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        sum += (2 * i + 1); 
    }

    printf("Tong = %d\n", sum);

    return 0;
}