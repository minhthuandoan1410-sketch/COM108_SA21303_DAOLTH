#include <stdio.h>

// ==================== BAI 1 ====================
float myMin(float a, float b, float c) {
    float minValue = a;
    if (b < minValue) minValue = b;
    if (c < minValue) minValue = c;
    return minValue;
}

float myMax(float a, float b, float c) {
    float maxValue = a;
    if (b > maxValue) maxValue = b;
    if (c > maxValue) maxValue = c;
    return maxValue;
}

void bai1() {
    float a, b, c;
    printf("Nhap 3 so: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("So nho nhat: %.2f\n", myMin(a, b, c));
    printf("So lon nhat: %.2f\n", myMax(a, b, c));
}

// ==================== BAI 2 ====================
int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    if (year % 4 == 0 && year % 100 != 0) return 1;
    return 0;
}

void bai2() {
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d la nam nhuan\n", year);
    else
        printf("%d khong phai nam nhuan\n", year);
}

// ==================== BAI 3 ====================
void bai3() {
    int n;
    printf("Nhap so trong [1,1000]: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("So khong nam trong khoang 1 - 1000!\n");
        return;
    }

    if (n % 5 == 0 && n % 9 == 0)
        printf("%d chia het cho 5 va 9\n", n);
    else
        printf("%d khong chia het cho 5 va 9\n", n);
}

// ==================== MAIN ====================
int main() {
    int choice;

    do {
        printf("\n====== MENU ======\n");
        printf("1. Bai 1: Tim min, max trong 3 so\n");
        printf("2. Bai 2: Kiem tra nam nhuan\n");
        printf("3. Bai 3: Kiem tra so chia het cho 5 va 9\n");
        printf("0. Thoat\n");
        printf("Chon bai: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 0: printf("Thoat chuong trinh...\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
