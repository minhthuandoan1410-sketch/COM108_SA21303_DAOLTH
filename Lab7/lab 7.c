# include <stdio.h>

int main(){
    char s[100];
    printf("xin moi nhap vao chuoi");
    gets(s);
    int i = 0; 
    int n = 0; // bien de dem nguyen am
    int p = 0; // bien de dem phu am
    //Khi gia tri cuoi cung cua mang != null
    while(s[i++]!='\0'){
        //neu s[i] = 'a' hoac 'i' hoac 'e' hoac 'o' thi n++
        //nguoc lai: p++
    }
    printf("chuoi '%s' co chua %d nguyen am va %d phu am.", s, n, p);
    
    return 0;
}

