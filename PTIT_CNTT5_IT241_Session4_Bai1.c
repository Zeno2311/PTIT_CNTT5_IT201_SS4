#include <stdio.h>

int main() {
    int n;
    printf("ban muon nhap bao nhieu phan tu vao trong mang: ");
    scanf("%d", &n);
    while (n <= 0 || n == 0) {
        printf("Vui log nhap lai so luong phan tu co trong mang: ");
        scanf("%d", &n);
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int check;
    printf("ban mon tim kiem phan tu nao trong mang: ");
    scanf("%d", &check);
    for (int i = 0; i < n; i++) {
        if (check == arr[i]) {
            printf("vi tri cua phan tu ban dang tim kiem la: %d", i);
            return 0;
        }
    }
    printf("khong tim thay phan tu!!!!");
    return 0;
}
