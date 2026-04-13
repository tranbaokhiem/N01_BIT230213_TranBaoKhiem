#include <stdio.h>

int main() {
    const int x = 10;
    const float pi = 3.14;
    const char str[] = "Hello";

    printf("Int: %d\n", x);
    printf("Float: %.2f\n", pi);
    printf("String: %s\n", str);

    return 0;
}