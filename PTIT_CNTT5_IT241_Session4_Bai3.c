#include <stdio.h>

int main() {
    int n;
    printf("so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    int count = -1, min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            count = i;
        }
    }
    printf("so nho nhat dau tien trong mang: %d", count);
    return 0;
}