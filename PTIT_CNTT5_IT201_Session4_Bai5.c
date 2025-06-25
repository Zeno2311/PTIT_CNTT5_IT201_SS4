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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int left = 0, right = n - 1;
    int checkNum, count = -1;
    printf("ban muon tim phan tu nao: ");
    scanf("%d", &checkNum);
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == checkNum) {
            count = mid;
            break;
        } else if (arr[mid] > checkNum) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    if (count == -1) {
        printf("Phan tu khong co trong mang");
    } else {
        printf("phan tu co ton tai");
    }
    return 0;
}