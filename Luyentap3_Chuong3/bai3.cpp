#include <stdio.h>

int main() {
    int x = 10; // biến ngoài

    {
        int x = 20; // biến trong
        printf("Gia tri x trong block: %d\n", x);
    }

    printf("Gia tri x ngoai block: %d\n", x);

    return 0;
}