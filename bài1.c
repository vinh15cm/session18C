#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khoi tao bien sinh vien va gan gia tri
    struct Student student;

    // Gan gia tri cho cac thuoc tinh
    strcpy(student.name, "Nguyen Van A");
    student.age = 20;
    strcpy(student.phoneNumber, "0123456789");

    // In cac gia tri ra man hinh
    printf("Thong tin sinh vien:\n");
    printf("Ho ten: %s\n", student.name);
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}

