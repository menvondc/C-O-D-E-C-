#include <stdio.h> // Thêm thư viện stdio.h để sử dụng các hàm nhập xuất dữ liệu.
#include <math.h> // Thêm thư viện math.h để sử dụng hàm toán học.

int main() {
    int n, count = 0; // Khai báo biến nguyên n để lưu giá trị nhập từ người dùng, và biến đếm count để đếm số lượng chữ số nguyên của n.
    printf("Nhap n: "); // In ra màn hình yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    
    // Kiểm tra nếu n là số âm, yêu cầu người dùng nhập lại cho đến khi n là số không âm.
    while (n < 0) {
        printf("Nhap lai n (n phai >= 0): "); // In ra thông báo yêu cầu nhập lại.
        scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    }
    
    // Sử dụng vòng lặp để đếm số lượng chữ số nguyên của n.
    while (n != 0) {
        n = n / 10; // Loại bỏ chữ số cuối cùng của n bằng cách chia n cho 10.
        count++; // Tăng biến đếm count lên 1.
    }
    
    printf("Co %d chu so nguyen cua n", count); // In ra số lượng chữ số nguyên của n.
    return 0; // Kết thúc chương trình.
}
