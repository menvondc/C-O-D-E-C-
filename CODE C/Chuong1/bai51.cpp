#include <stdio.h>
#include <math.h>

int main(){
    int n, m = 0, max = 0; // Khai báo biến n để lưu giá trị nhập từ người dùng, biến m để lưu chữ số hiện tại, và biến max để lưu chữ số lớn nhất

    // Nhập giá trị của n từ người dùng và kiểm tra nếu n là số âm thì yêu cầu nhập lại
    printf("Nhap n: ");
    scanf("%d", &n);
    while(n < 0){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }

    // Dùng vòng lặp để tìm chữ số lớn nhất trong n
    while(n > 0){
        m = n % 10; // Lấy chữ số cuối cùng của n
        if(m > max){ // So sánh chữ số hiện tại với max
            max = m; // Nếu chữ số hiện tại lớn hơn max, gán max bằng chữ số hiện tại
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
    }

    // In ra chữ số lớn nhất trong n
    printf("chu so lon nhat la: %d", max);

    return 0;
}
