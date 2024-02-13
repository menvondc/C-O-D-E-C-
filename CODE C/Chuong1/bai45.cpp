#include <stdio.h>

int main() {
    int n, count = 0, sum = 0, value;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    // Kiểm tra nếu n là số âm, yêu cầu người dùng nhập lại cho đến khi n là số không âm.
    while (n < 0) {
        printf("Nhap lai n (n phai >= 0): ");
        scanf("%d", &n);
    }
    
    // Sử dụng vòng lặp để tính tổng các chữ số và đếm số lượng chữ số của n.
    do {
        value = n % 10; // Lấy chữ số cuối cùng của n.
        sum += value; // Cộng chữ số vào tổng.
        count++; // Tăng biến đếm count lên 1.
        n /= 10; // Loại bỏ chữ số cuối cùng của n.
    } while (n != 0);
    
    printf("Tong cac chu so cua n: %d\n", sum); // In ra tổng các chữ số của n.
    printf("So luong chu so cua n: %d\n", count); // In ra số lượng chữ số của n.
    return 0;
}
