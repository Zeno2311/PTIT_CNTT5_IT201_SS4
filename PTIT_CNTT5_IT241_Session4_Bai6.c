#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    typedef struct {
        int id;
        char name[50];
        int age;
    } sinhVien;

    int a;
    printf("ban muon nhap vao bao nhieu sinh vien: ");
    scanf("%d", &a);
    sinhVien sv[a];
    for (int i = 0; i < a; i++) {
        printf("id sinh vien thu %d: ", i + 1);
        scanf("%d", &sv[i].id);
        getchar();
        printf("ten cua sinh vien thu %d: ", i + 1);
        fgets(sv[i].name, 50, stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
        printf("tuoi cua sinh vien thu %d: ", i + 1);
        scanf("%d", &sv[i].age);
        getchar();
    }
    int n = sizeof(sv) / sizeof(sv[0]);
    int idSearch;
    printf("ban muon tim sinh vien nao !!!! \n");
    printf("vui long nhap id: ");
    scanf("%d", &idSearch);
    for (int i = 0; i < n; i++) {
        if (sv[i].id == idSearch) {
            printf("%d %s %d", sv[i].id, sv[i].name, sv[i].age);
            return 0;
        }
    }
    printf("Id sinh vien khong ton tai");
    return 0;
}
