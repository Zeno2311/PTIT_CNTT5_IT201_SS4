#include <stdio.h>

int main() {
    int n;
    printf("so luong phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ",i);
        scanf("%d",&arr[i]);
    }
    int count = -1,  max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count = i;
        }
    }
    printf("chi so lon nhat dau tien trong mang: %d", count);
    return 0;
}