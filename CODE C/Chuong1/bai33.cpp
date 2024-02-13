#include <stdio.h> // Thêm thư viện stdio.h để sử dụng các hàm nhập xuất dữ liệu.
#include <math.h> // Thêm thư viện math.h để sử dụng hàm tính toán toán học.

int main() {
    int n; // Khai báo biến nguyên n để lưu giá trị nhập từ người dùng.
    printf("Nhap n: "); // In ra màn hình yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.

    float x = sqrt(2); // Khai báo biến x và gán giá trị là căn bậc hai của 2.
    for(int i = 2; i <= n; i++) { // Bắt đầu vòng lặp từ i=2 đến i=n.
        x = sqrt(2 + x); // Cập nhật giá trị của x bằng căn bậc hai của (2 + x).
    }

    printf("sum = %.8f", x); // In ra giá trị của x với 8 chữ số sau dấu thập phân.

    return 0; // Kết thúc chương trình.
}
