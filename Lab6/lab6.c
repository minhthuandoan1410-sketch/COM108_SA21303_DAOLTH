#include <stdio.h>

int main() {
    int a[10];
    int i, tong = 0;

    // Nhập 10 số
    printf("Nhap 10 so:\n");
    for (i = 0; i < 10; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        tong += a[i];   // cộng dồn vào tổng
    }

    // Xuất mảng
    printf("\nMang vua nhap:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    // Xuất tổng
    printf("\n\nTong cua 10 so la: %d\n", tong);

    return 0;
}
