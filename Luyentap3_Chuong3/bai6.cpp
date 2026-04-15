#include <stdio.h>

int main () {
  /*if long nhau
    *if (a > 0) {
    if (b > 0) {
    if (c > 0) {
    printf("3 so duong\n");
    }
    }
    }*/
    int a, b, c;
    printf("nhap 3 so nguyen");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0) {
        printf("3 so duong\n");
    }
    return 0;

}

