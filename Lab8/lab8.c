#include <stdio.h>
// kieu cau truc
struct SINHVIEN{
    int MASV;
    char HOTEN[30];
    float DIEMTB;
};

int main(){
    struct SINHVIEN sv1 = {2,"Doan Minh Thuan",10.0};
    printf("nhap ma sv: ");
    scanf("%d", &sv1.MASV);
    printf("nhap ho ten sv: ");
    scanf("%s", sv1.HOTEN);
    printf("nhap diem : ");      
    scanf("%f", &sv1.DIEMTB);
    
    // thong tin sinh vien
    printf("Ma sv: %d - ho ten: %s - diem tb: %.2f", sv1.MASV, sv1.HOTEN, sv1.DIEMTB);              
    // danh gia hoc luc
    char hocluc[10];
    if(sv1.DIEMTB >= 8){
        printf(" - hoc luc: gioi");
    }
        else if(sv1.DIEMTB >= 6.5){
            printf(" - hoc luc: kha");
        }else if(sv1.DIEMTB >= 5){
            printf(" - hoc luc: trung binh");
        }else{
            printf(" - hoc luc: yeu");
        }
    void
    printf("\n");
        return 0;
    }

