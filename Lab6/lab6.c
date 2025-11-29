#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap %d phan tu cua mang: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bai 1: Trung binh cac so chia het cho 3
    int sumDiv3 = 0;
    int countDiv3 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sumDiv3 += arr[i];
            countDiv3++;
        }
    }
    if (countDiv3 > 0) {
        double avgDiv3 = (double)sumDiv3 / countDiv3;
        printf("Trung binh tong cac so chia het cho 3: %.2lf\n", avgDiv3);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }

    // Bai 2: Tim gia tri lon nhat va nho nhat
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    printf("Gia tri nho nhat: %d\n", minVal);
    printf("Gia tri lon nhat: %d\n", maxVal);

    // Bai 3: Sap xep mang giam dan (bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
