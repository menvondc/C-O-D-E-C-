#include <stdio.h>

int main(){
    int n; // Biến n để lưu giá trị nhập từ người dùng
    printf("Nhap n: ");
    scanf("%d", &n); // Nhập giá trị của n từ người dùng

    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        if(i%2!=0){ // Kiểm tra xem số hiện tại có phải là số lẻ không
            printf("\n%d ", i); // In ra số lẻ hiện tại
        }
    }

    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
