#include <stdio.h> // Thêm thư viện stdio.h để sử dụng các hàm nhập xuất dữ liệu.
#include <math.h> // Thêm thư viện math.h để sử dụng hàm tính toán toán học.

int main() {
    int n; // Khai báo biến nguyên n để lưu giá trị nhập từ người dùng.
    float x = sqrt(2); // Khởi tạo biến x bằng căn bậc hai của 2.
    printf("Nhập n: "); // In ra màn hình yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    for (int i = 3; i <= n; i++) { // Vòng lặp từ 3 đến n để tính tổng.
        x = pow(x + i, 1.0 / i); // Cập nhật giá trị của x bằng căn bậc i của (x + i).
    }
    printf("sum = %.8f", x); // In ra giá trị của x với 8 chữ số sau dấu thập phân.
    return 0; // Kết thúc chương trình.
}
