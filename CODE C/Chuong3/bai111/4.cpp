#include <stdio.h>  // Bao gồm thư viện stdio.h để sử dụng hàm nhập xuất chuẩn trong C

int main() {  // Khai báo hàm main(), điểm bắt đầu của chương trình
    int n;  // Khai báo biến nguyên n để lưu số hàng của tam giác
    printf("Nhap n: ");  // In ra thông báo yêu cầu người dùng nhập số hàng của tam giác
    scanf("%d", &n);  // Đọc giá trị mà người dùng nhập từ bàn phím và gán cho biến n

    for(int i = 1; i <= n; i++) {  // Vòng lặp bên ngoài để duyệt qua từng hàng của tam giác
        for(int j = 1; j <= i; j++) {  // Vòng lặp bên trong để duyệt qua từng cột trong mỗi hàng
            if(j == 1 || j == i || i == n) {  // Kiểm tra vị trí của dấu '*' trong hàng
                printf("*");  // In ra một dấu '*' nếu đang ở vị trí đầu, cuối hàng hoặc hàng cuối cùng
            } else {  
                printf(" ");  // In ra một khoảng trắng nếu không ở vị trí đầu, cuối hàng hoặc hàng cuối cùng
            }  
        }  
        printf("\n");  // In ra dòng mới sau khi hoàn thành việc in trên mỗi hàng của tam giác
    }  

    return 0;  // Kết thúc hàm main() và trả về giá trị 0, biểu thị rằng chương trình đã thực thi thành công
}  // Kết thúc của hàm main()
