#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem (0 - 10): ");
    scanf("%f", &diem);

    if (diem >= 9 && diem <= 10) {
        printf("Xuat sac\n");
    } else if (diem >= 8) {
        printf("Gioi\n");
    } else if (diem >= 6.5) {
        printf("Kha\n");
    } else if (diem >= 5) {
        printf("Trung binh\n");
    } else if (diem >= 0) {
        printf("Yeu\n");
    } else {
        printf("Diem khong hop le\n");
    }

    return 0;
}