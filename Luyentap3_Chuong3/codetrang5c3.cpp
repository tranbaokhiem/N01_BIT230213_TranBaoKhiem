#include <stdio.h>

int main() {
    int x =10;
    {
        int y = 20;
        printf("Inside outer block: x = %d, y = %d\n", x, y);

        {
            int z = 30;
            printf("Inside inner block: x = %d, y = %d, z = %d\n", x, y, y);

        }
    }
    printf("Outside all blocks: x = %d\n",x);
    return 0;
}
