#include <stdio.h>

int main() {
    int n; // Khai báo biến n để lưu giá trị nhập từ người dùng.
    
    printf("Nhap n: "); // Yêu cầu người dùng nhập giá trị của n.
    scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    
    while (n < 1) { // Vòng lặp while kiểm tra nếu n nhỏ hơn 1, yêu cầu người dùng nhập lại cho đến khi n >= 1.
        printf("Xin nhap lai n: "); // Xuất thông báo yêu cầu nhập lại giá trị của n.
        scanf("%d", &n); // Nhận giá trị của n từ người dùng.
    }
    
    printf("Cac uoc so cua n: "); // Xuất thông báo để bắt đầu liệt kê các ước số của n.
    
    for (int i = 1; i <= n; i++) { // Vòng lặp for từ i=1 đến i=n để kiểm tra từng số nguyên dương có là ước số của n hay không.
        if (n % i == 0) { // Kiểm tra xem i có phải là ước số của n không.
            printf("%d ", i); // Nếu là ước số của n, in giá trị của i.
        }
    }
    
    return 0; // Kết thúc chương trình.
}
