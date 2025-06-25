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
    int count = -1, checkNum;
    printf("ban muon tim phan tu nao: ");
    scanf("%d", &checkNum);
    for (int i = 0; i < n; i++) {
        if (arr[i] == checkNum) {
            count = i;
        }
    }
    if (count == -1) {
        printf("khong ton tai");
    } else {
        printf("%d", count);
    }
}