#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc sinh vien
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao mang sinh vien co 5 phan tu
    struct Student students[5];

    // Nhap thong tin tung sinh vien
    for (int i = 0; i < 5; i++) {
        // Gan id tu dong tang, bat dau tu 1
        students[i].id = i + 1;

        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ho ten: ");
        getchar(); // Loai bo ky tu thua truoc khi nhap chuoi
        fgets(students[i].name, sizeof(students[i].name), stdin);
        if (students[i].name[strlen(students[i].name) - 1] == '\n') {
            students[i].name[strlen(students[i].name) - 1] = '\0';
        }

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
    }

    // In thong tin cac sinh vien
    printf("\nThong tin cac sinh vien da nhap:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ho ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

