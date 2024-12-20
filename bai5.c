#include <stdio.h>
#include <string.h>

// Dinh nghia cau truc sinh vien
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

// Ham tim sinh vien theo ID
int findStudentById(struct Student students[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            return i; // Tra ve vi tri cua sinh vien
        }
    }
    return -1; // Khong tim thay
}

int main() {
    // Khai bao mang sinh vien voi 50 phan tu va gan san 5 phan tu
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Tran Thi B", 22, "0987654321"},
        {3, "Le Van C", 21, "0912345678"},
        {4, "Pham Thi D", 23, "0923456789"},
        {5, "Hoang Van E", 24, "0934567890"}
    };
    int currentSize = 5; // So phan tu hien co trong mang

    // Nhap ID can tim kiem
    int searchId;
    printf("Nhap ID cua sinh vien can chinh sua: ");
    scanf("%d", &searchId);

    // Tim kiem sinh vien theo ID
    int index = findStudentById(students, currentSize, searchId);

    if (index == -1) {
        // Khong tim thay sinh vien
        printf("Khong tim thay sinh vien voi ID %d.\n", searchId);
    } else {
        // Tim thay sinh vien, cho phep sua
        printf("Sinh vien tim thay:\n");
        printf("ID: %d\n", students[index].id);
        printf("Ho ten: %s\n", students[index].name);
        printf("Tuoi: %d\n", students[index].age);
        printf("So dien thoai: %s\n", students[index].phoneNumber);

        // Sua thong tin
        printf("Nhap thong tin moi cho sinh vien:\n");
        printf("Ho ten moi: ");
        getchar(); // Loai bo ky tu thua truoc khi nhap chuoi
        fgets(students[index].name, sizeof(students[index].name), stdin);
        if (students[index].name[strlen(students[index].name) - 1] == '\n') {
            students[index].name[strlen(students[index].name) - 1] = '\0';
        }

        printf("Tuoi moi: ");
        scanf("%d", &students[index].age);

        printf("Thong tin sinh vien sau khi chinh sua thanh cong.\n");
    }

    // In thong tin tat ca sinh vien
    printf("\nThong tin cac sinh vien hien co trong mang:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ho ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n\n", students[i].phoneNumber);
    }

    return 0;
}

