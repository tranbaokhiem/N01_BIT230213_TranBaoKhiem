#include <stdio.h>

int main() {
    int n;
    long long S = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        S += i * i;
    }

    printf("Tong S = %lld\n", S);

    return 0;
}