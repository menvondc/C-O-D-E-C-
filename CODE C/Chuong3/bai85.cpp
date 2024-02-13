#include <stdio.h>

int main(){
    int n; // Biến để lưu giá trị của tháng
    printf("Nhap n: ");
    scanf("%d", &n); // Nhập giá trị của tháng từ người dùng

    switch(n){ // Sử dụng cấu trúc switch-case để kiểm tra giá trị của tháng
        case 1:
        case 2:
        case 3:
            printf("Quy1"); // Nếu tháng là 1, 2 hoặc 3, in ra "Quý 1"
            break;
        case 4:
        case 5:
        case 6:
            printf("Quy2"); // Nếu tháng là 4, 5 hoặc 6, in ra "Quý 2"
            break;
        case 7:
        case 8:
        case 9:
            printf("Quy3"); // Nếu tháng là 7, 8 hoặc 9, in ra "Quý 3"
            break;
        case 10:
        case 11:
        case 12:
            printf("Quy4"); // Nếu tháng là 10, 11 hoặc 12, in ra "Quý 4"
            break;
        default:
            printf("Xin nhap dung thang trong nam!"); // Trong trường hợp không phù hợp, in ra thông báo lỗi
    }

    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
