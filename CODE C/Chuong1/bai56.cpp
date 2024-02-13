#include <stdio.h>

int main(){
    int n, count = 0; // Khai báo biến n để lưu giá trị nhập từ người dùng và biến count để đếm số chữ số lẻ
    printf("Nhap n: ");
    scanf("%d", &n);

    // Sử dụng vòng lặp để kiểm tra từng chữ số của n
    while(n > 0){
        int value = n % 10; // Lấy chữ số cuối cùng của n
        if(value % 2 != 0){ // Kiểm tra xem chữ số hiện tại có phải là lẻ không
            count = 1; // Gán count bằng 1 nếu tìm thấy chữ số lẻ
            break; // Thoát khỏi vòng lặp ngay sau khi tìm thấy chữ số lẻ
        }
        n /= 10; // Loại bỏ chữ số cuối cùng của n
    }

    // Kiểm tra giá trị của count để in ra thông báo tương ứng
    if(count != 0){
        printf("Co chu so le!");
    }
    else{
        printf("Toan la chu so chan!");
    }

    return 0;
}
