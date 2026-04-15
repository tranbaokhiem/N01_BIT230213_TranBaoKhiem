#include <stdio.h>

int main() {
    int x = 30; // outer block

    {
        printf("Gia tri x trong inner block: %d\n", x);
    }

    return 0;
}