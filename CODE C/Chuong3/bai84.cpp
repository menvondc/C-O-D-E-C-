#include <stdio.h>

int main(){
    int a, b; // Khai báo biến a, b để lưu hệ số của phương trình
    float x; // Biến để lưu nghiệm của phương trình

    // Nhập giá trị của hai hệ số a và b từ người dùng
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    // In ra phương trình đã nhập
    printf("%dx + %d = 0", a, b);

    if(a==0){
        printf("\nPhuong trinh vo nghiem!"); // Nếu a bằng 0, phương trình vô nghiệm
    }
    else{
        x=(float)b/(float)a; // Tính nghiệm x của phương trình
    }

    // In ra giá trị của nghiệm x
    printf("\nx = %.2f", x);
    
    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
