#include <stdio.h>

int main(){
    int n, sum=0; // Khai báo biến n để lưu giá trị nhập từ người dùng và sum để lưu tổng các số lẻ
    printf("Nhap n: ");
    scanf("%d", &n); // Nhập giá trị của n từ người dùng

    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        if(i%2!=0){ // Kiểm tra xem số hiện tại có phải là số lẻ không
            printf("\ni = %d ", i); // In ra số lẻ hiện tại
            sum+=i; // Cộng số lẻ hiện tại vào tổng
        }
    }
    printf("\nsum = %d", sum); // In ra tổng các số lẻ từ 1 đến n

    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
