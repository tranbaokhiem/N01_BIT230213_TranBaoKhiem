#include <stdio.h>

long long tong(int n) {
    if (n == 1)
        return 1;
    return n * n + tong(n - 1);
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Tong S = %lld\n", tong(n));

    return 0;
}