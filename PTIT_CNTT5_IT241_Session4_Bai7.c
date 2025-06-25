#include <stdio.h>

int main() {
    int n;
    printf("so luong phan tu co trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("cap doi xung: (%d, %d)\n", arr[i], arr[n - 1 - i]);
        }
        count++;
    }
    if (count == 0) {
        printf("khong co cap doi xung");
    }
    return 0;
}