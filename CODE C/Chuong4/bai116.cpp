#include <stdio.h>

// Hàm tính tổng các số từ 1 đến n
int tinhTong(int n) {
    int sum=0; // Khởi tạo biến sum để lưu tổng các số
    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        sum+=i; // Cộng giá trị của số i vào tổng sum
    }
    return sum; // Trả về tổng các số từ 1 đến n
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    int tong = tinhTong(n);
    printf("Tong S = %d", tong);
}
