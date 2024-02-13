#include <stdio.h>

int main() {
    int n, count = 0, digit;
    
    printf("Nhap n: ");
    scanf("%d", &n);
    
    // Kiểm tra nếu n là số âm, yêu cầu người dùng nhập lại cho đến khi n là số không âm.
    while (n < 0) {
        printf("Nhap lai n (n phai >= 0): ");
        scanf("%d", &n);
    }
    
    // Sử dụng vòng lặp để duyệt qua từng chữ số của n và đếm số lượng chữ số lẻ.
    while (n != 0) {
        digit = n % 10; // Lấy chữ số cuối cùng của n.
        if (digit % 2 != 0) { // Kiểm tra xem chữ số là số lẻ.
            count++; // Nếu là số lẻ, tăng biến đếm count lên 1.
        }
        n /= 10; // Loại bỏ chữ số cuối cùng của n.
    }
    
    printf("So luong chu so le la: %d\n", count); // In ra số lượng chữ số lẻ của n.
    
    return 0;
}
