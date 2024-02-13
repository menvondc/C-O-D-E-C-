#include <stdio.h>
#include <math.h>

int main(){
    int n; // Khai báo biến n để lưu giá trị nhập từ người dùng

    // Nhập giá trị của n từ người dùng và kiểm tra nếu n là số âm thì yêu cầu nhập lại
    printf("Nhap n: ");
    scanf("%d", &n);
    while(n < 0){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }

    // Dùng vòng lặp để lấy chữ số đầu tiên của n
    for(int i = 1; i <= n; i++){
        n = n / 10; // Lấy chữ số đầu tiên của n bằng cách chia n cho 10
    }

    // In ra chữ số đầu tiên của n
    printf("Chu so dau tien la: %d", n);

    return 0;
}
