#include <stdio.h>

int main() {
    int n, sum = 0, m = 1; // Khai báo biến n, sum, và m. Ban đầu, sum được gán giá trị 0, m được gán giá trị 1.
    
    printf("Nhap n: "); // Xuất thông báo để yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    
    for (int i = 1; i <= n; i++) { // Vòng lặp từ i=1 đến i=n.
        m = m * i; // Tính giai thừa của i và gán vào biến m.
        sum += m; // Tổng sum được cập nhật bằng cách cộng thêm m vào mỗi lần lặp.
    }
    
    printf("sum = %d", sum); // In ra tổng sum sau khi đã tính toán xong.
    
    return 0; // Kết thúc chương trình.
}
