#include <stdio.h>

void increment() {
    //int counter = 0;
    //counter++;
    //printf("Counter (khong static): %d\n", counter);
    static int counter = 0;
    counter++;
    printf("Counter (static): %d\n", counter);
}

int main() {
    increment();
    increment();
    increment();
    return 0;
}