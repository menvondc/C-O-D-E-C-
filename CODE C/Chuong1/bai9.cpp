#include <stdio.h>  // Thêm thư viện để sử dụng các hàm nhập xuất

int main() {        // Hàm main, điểm bắt đầu của chương trình
    int n, sum = 1; // Khai báo biến n để lưu giá trị nhập từ bàn phím, biến sum để tính tổng, khởi tạo sum = 1 để tính giai thừa

    printf("Nhap n: ");  // In ra màn hình thông báo để nhập giá trị của n
    scanf("%d", &n);     // Nhập giá trị của n từ bàn phím

    for (int i = 1; i <= n; i++) { // Bắt đầu vòng lặp for từ i = 1 đến n
        sum *= i;                  // Tính giai thừa của n và lưu vào biến sum
    }                              // Kết thúc vòng lặp for

    printf("sum = %d", sum);  // In ra màn hình giá trị của sum
    return 0;                  // Trả về giá trị 0 để kết thúc chương trình
}
