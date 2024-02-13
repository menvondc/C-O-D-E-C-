#include <stdio.h>

int main(){
    float a, b, c, max=0; // Khai báo biến a, b, c là ba số nguyên và biến max để lưu giá trị lớn nhất

    // Nhập giá trị của ba số nguyên a, b, c từ người dùng
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    max=a; // Giả sử a là giá trị lớn nhất ban đầu

    // So sánh giá trị của b và c với max để tìm ra giá trị lớn nhất
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }

    // In ra giá trị lớn nhất
    printf("Max = %.3f", max);
    
    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
