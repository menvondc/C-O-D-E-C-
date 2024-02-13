#include <stdio.h>  // Bao gồm thư viện stdio.h để sử dụng hàm nhập xuất chuẩn trong C

int main() {  // Khai báo hàm main(), điểm bắt đầu của chương trình
    int n;  // Khai báo biến nguyên n để lưu số hàng của tam giác
    printf("Nhap n: ");  // In ra thông báo yêu cầu người dùng nhập số hàng của tam giác
    scanf("%d", &n);  // Đọc giá trị mà người dùng nhập từ bàn phím và gán cho biến n

    for(int i = 1; i <= n; i++) {  // Vòng lặp bên ngoài để duyệt qua từng hàng của tam giác
        for(int j = 1; j <= i; j++) {  // Vòng lặp bên trong để in ra dấu '*' trên mỗi hàng của tam giác
            printf("* ");  // In ra một dấu '*' theo sau là một khoảng trắng
        }
        printf("\n");  // In ra dòng mới sau khi hoàn thành việc in trên mỗi hàng của tam giác
    }  

    return 0;  // Kết thúc hàm main() và trả về giá trị 0, biểu thị rằng chương trình đã thực thi thành công
}  // Kết thúc của hàm main()
