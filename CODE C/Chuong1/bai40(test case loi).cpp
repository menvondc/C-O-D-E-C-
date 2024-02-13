#include <stdio.h> // Thêm thư viện stdio.h để sử dụng các hàm nhập xuất dữ liệu.
#include <math.h> // Thêm thư viện math.h để sử dụng hàm tính toán toán học.

int main() {
    int n; // Khai báo biến nguyên n để lưu giá trị nhập từ người dùng.
    float x; // Khai báo biến thực x để lưu giá trị nhập từ người dùng.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    scanf("%f", &x); // Nhận giá trị của x từ người dùng.
    float s = sqrt(x); // Khởi tạo biến s bằng căn bậc hai của x.
    for (int i = 2; i <= n; i++) { // Vòng lặp từ 2 đến n để tính tổng.
        s = sqrt((pow(x, i)) + s); // Cập nhật giá trị của s bằng căn bậc hai của (x^i + s).
    }
    printf("Tong la: %f", s); // In ra giá trị của s.
    return 0; // Kết thúc chương trình.
}
