#include <stdio.h>
#define N 100
//dinh ngia ham
void nhapmang(int a[N], int n);
void xuatmang(int a[N], int n);
int tongmang(int a[N], int n);
// nhập mảng 1 chiều 
void nhapmang(int a[N], int n){
    for(int i=0; i<n; i++){
        printf("nhap a[%d]: ", i);
        scanf("%d", &a[i]);

    }
}
    // xuất mảng 1 chiều
 void xuatmang(int a[N], int n){
        printf("nhap phan tu mang:");
        for(int i=0; i<n; i++){
            printf("%d ", a[i]);
        }
    }
    // tính tổng mảng 1 chiều
    int tongmang(int a[N], int n){
        int tong = 0;
        for(int i=0; i<n; i++){
            tong += a[i];
        }
        return tong;
    }
int main(){
    int n;
    int a[N];
    printf("nhap so phan tu mang: ");
    scanf("%d", &n);
    nhapmang(a, n);
    xuatmang(a, n);
    printf("Tong mang : %d",tongmang(a, n));// xuat dy lieu tong mang
    return 0;
}