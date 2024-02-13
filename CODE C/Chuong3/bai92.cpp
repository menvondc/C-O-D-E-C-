#include <stdio.h>

int main(){
    int a, b; // Khai báo biến a và b để lưu giá trị nhập từ người dùng
    printf("Nhap a: ");
    scanf("%d", &a); // Nhập giá trị của a từ người dùng
    printf("Nhap b: ");
    scanf("%d", &b); // Nhập giá trị của b từ người dùng

    while(b!=0){ // Vòng lặp sẽ tiếp tục cho đến khi b trở thành 0
        int temp=b; // Gán giá trị của b vào biến tạm temp
        b=a%b; // Tính phần dư khi a chia cho b và gán kết quả vào b
        a=temp; // Gán giá trị temp vào a
    }
    printf("Uoc chung lon nhat: %d", a); // In ra ước chung lớn nhất

    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
