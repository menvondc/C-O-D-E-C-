#include <stdio.h> // Thêm thư viện stdio.h để sử dụng các hàm nhập xuất dữ liệu.
#include <math.h> // Thêm thư viện math.h để sử dụng hàm tính toán toán học.

// Hàm tính giai thừa của một số nguyên dương n.
int giaithua(int n) {
    int s = 1; // Khởi tạo biến s bằng 1.
    for (int i = 1; i <= n; i++) { // Vòng lặp từ 1 đến n để tính giai thừa.
        s *= i; // Cập nhật giá trị của s bằng s nhân với i.
    }
    return s; // Trả về giá trị của giai thừa n.
}

int main() {
    int n; // Khai báo biến nguyên n để lưu giá trị nhập từ người dùng.
    float x = sqrt(1); // Khởi tạo biến x bằng căn bậc hai của 1.
    printf("Nhập n: "); // In ra màn hình yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    for (int i = 2; i <= n; i++) { // Vòng lặp từ 2 đến n để tính tổng.
        x = sqrt(giaithua(i) + x); // Cập nhật giá trị của x bằng căn bậc hai của (giaithua(i) + x).
    }
    printf("sum = %.8f", x); // In ra giá trị của x với 8 chữ số sau dấu thập phân.
    return 0; // Kết thúc chương trình.
}
