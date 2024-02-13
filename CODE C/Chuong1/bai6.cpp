#include <stdio.h>  // Thêm thư viện để sử dụng các hàm nhập xuất

int main() {        // Hàm main, điểm bắt đầu của chương trình
    int n, i = 1;   // Khai báo biến n để lưu giá trị nhập từ bàn phím, biến i để đếm và duyệt từ 1 đến n
    float sum = 0;  // Khởi tạo biến sum để tính tổng

    printf("Nhap n: ");  // In ra màn hình thông báo để nhập giá trị của n
    scanf("%d", &n);     // Nhập giá trị của n từ bàn phím

    while (i <= n) {                 // Vòng lặp while để tính tổng
        sum += 1.0 / (i * (i + 1));  // Cập nhật giá trị của sum bằng tổng của sum và 1 chia cho (i nhân với (i + 1))
        i++;                         // Tăng giá trị của biến i lên 1 sau mỗi lần lặp
    }

    printf("sum = %.2f", sum);  // In ra màn hình giá trị của sum với 2 chữ số sau dấu phẩy
    return 0;                    // Trả về giá trị 0 để kết thúc chương trình
}
