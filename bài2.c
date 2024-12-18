#include <stdio.h>

// Dinh nghia cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khoi tao bien sinh vien
    struct Student student;

    // Nhap thong tin sinh vien tu nguoi dung
    printf("Nhap thong tin sinh vien:\n");

    printf("Ho ten: ");
    fgets(student.name, sizeof(student.name), stdin); // Doc chuoi co dau xuong dong
    // Loai bo dau xuong dong neu co
    if (student.name[strlen(student.name) - 1] == '\n') {
        student.name[strlen(student.name) - 1] = '\0';
    }

    printf("Tuoi: ");
    scanf("%d", &student.age);

    printf("So dien thoai: ");
    scanf("%s", student.phoneNumber); // Doc chuoi khong co khoang trang

    // In thong tin sinh vien ra man hinh
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ho ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}

