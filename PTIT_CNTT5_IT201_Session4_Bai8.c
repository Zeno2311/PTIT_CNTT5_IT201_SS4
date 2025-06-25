#include <stdio.h>

int main() {
    int n;
    printf("so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int search;
    int count = -1;
    printf("so ban can tim: ");
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d ", i + 1);
            count++;
        }
    }
    if (count == -1) {
        printf("phan tu khong ton tai");
    }
}
