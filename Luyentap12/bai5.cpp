#include <stdio.h>

void sapXepGiam(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    printf("Mang ban dau: ");
    inMang(arr, n);

    sapXepGiam(arr, n);

    printf("Mang sau khi sap xep giam: ");
    inMang(arr, n);

    return 0;
}