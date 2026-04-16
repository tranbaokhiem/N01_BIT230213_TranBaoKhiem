#include <stdio.h>

int main() {
    int n;

    printf("Nhap so (1-7): ");
    scanf("%d", &n);

    switch(n) {
        case 1: printf("Thu 2"); break;
        case 2: printf("Thu 3"); break;
        case 3: printf("Thu 4"); break;
        case 4: printf("Thu 5"); break;
        case 5: printf("Thu 6"); break;
        case 6: printf("Thu 7"); break;
        case 7: printf("Chu nhat"); break;
        default: printf("Khong hop le");
    }

    return 0;
}