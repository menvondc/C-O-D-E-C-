#include <stdio.h> // Thêm thư viện stdio.h để sử dụng các hàm nhập xuất dữ liệu.
#include <math.h> // Thêm thư viện math.h để sử dụng hàm tính toán toán học.

// Hàm tính giai thừa của một số nguyên dương n.
int check(int n) {
    int S = 1; // Khởi tạo biến S bằng 1.
    for (int i = 1; i <= n; i++) { // Vòng lặp từ 1 đến n để tính giai thừa.
        S *= i; // Cập nhật giá trị của S bằng S nhân với i.
    }
    return S; // Trả về giá trị của giai thừa n.
}

int main() {
    int n; // Khai báo biến nguyên n để lưu giá trị nhập từ người dùng.
    float x = check(1); // Khởi tạo biến x bằng giai thừa của 1 (1!).
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    for (int i = 2; i <= n; i++) { // Vòng lặp từ 2 đến n để tính tổng.
        x = pow((check(i) + x), 1.0 / (i + 1)); // Cập nhật giá trị của x bằng căn bậc (i + 1) của (check(i) + x).
    }
    printf("Tong la: %f", x); // In ra giá trị của x.
    return 0; // Kết thúc chương trình.
}
