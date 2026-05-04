#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1, p2;

    printf("Nhap ten san pham 1: ");
    scanf("%s", p1.name);

    printf("Nhap gia san pham 1: ");
    scanf("%f", &p1.price);

    printf("Nhap ten san pham 2: ");
    scanf("%s", p2.name);

    printf("Nhap gia san pham 2: ");
    scanf("%f", &p2.price);

    if (p1.price > p2.price) {
        printf("San pham 1 dat hon\n");
    } else if (p1.price < p2.price) {
        printf("San pham 2 dat hon\n");
    } else {
        printf("Hai san pham co gia bang nhau\n");
    }

    if (strcmp(p1.name, p2.name) == 0) {
        printf("Hai san pham cung ten\n");
    } else {
        printf("Hai san pham khac ten\n");
    }

    return 0;
}