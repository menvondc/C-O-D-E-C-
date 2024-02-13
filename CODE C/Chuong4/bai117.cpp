#include <stdio.h>
#include <math.h>

int tinhTong(int n, int x) {
    int sum = 0; // Khởi tạo biến sum với giá trị ban đầu là 0
    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        sum += pow(x,i); // Cộng giá trị của lũy thừa của x^i vào sum
    }
    return sum; // Trả về tổng các lũy thừa
}

int main() {
    int n, x;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);
    int tong = tinhTong(n, x);
    printf("Tong S = %d", tong);
}
