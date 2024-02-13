#include <stdio.h>   // Thêm thư viện để sử dụng các hàm nhập xuất
#include <math.h>    // Thêm thư viện để sử dụng hàm pow

int main() {        // Hàm main, điểm bắt đầu của chương trình
    int x, n;       // Khai báo biến x để lưu giá trị nhập từ bàn phím, biến n để lưu giá trị của số mũ
    printf("Nhap co so x: ");  // In ra màn hình thông báo để nhập giá trị của x
    scanf("%d", &x);           // Nhập giá trị của x từ bàn phím

    printf("Nhap so mu n: ");  // In ra màn hình thông báo để nhập giá trị của n
    scanf("%d", &n);           // Nhập giá trị của n từ bàn phím

    int sum = pow(x, n);       // Tính x mũ n và lưu vào biến sum

    printf("sum = %d", sum);   // In ra màn hình giá trị của sum
    return 0;                   // Trả về giá trị 0 để kết thúc chương trình
}
