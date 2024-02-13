#include <stdio.h>
#include <math.h>

int main() {
    int n, x; // Khai báo biến n và x để lưu giá trị nhập từ người dùng.
    double sum = 0; // Khai báo biến sum để lưu tổng của các giá trị tính toán.
    
    printf("Nhap n: "); // Xuất thông báo để yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    
    printf("Nhap x: "); // Xuất thông báo để yêu cầu người dùng nhập giá trị của x.
    scanf("%d", &x); // Nhận giá trị của x từ người dùng.
    
    for (int i = 1; i <= n; i++) { // Vòng lặp từ i=1 đến i=n.
        double value = pow(x, i); // Tính giá trị x^i và gán vào biến value.
        sum += value; // Cộng giá trị mới vào tổng sum.
    }

    printf("sum = %.2f", sum); // In ra tổng sum với 2 chữ số sau dấu thập phân.

    return 0; // Kết thúc chương trình.
}
