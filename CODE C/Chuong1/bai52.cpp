#include <stdio.h>
#include <math.h>

int main(){
    int n, m, min, value; // Khai báo biến n để lưu giá trị nhập từ người dùng, biến m để lưu chữ số hiện tại, biến min để lưu chữ số nhỏ nhất, và biến value để lưu giá trị tạm thời của chữ số hiện tại

    // Nhập giá trị của n từ người dùng và kiểm tra nếu n là số âm thì yêu cầu nhập lại
    printf("Nhap n: ");
    scanf("%d", &n);
    while(n < 0){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }

    min = n % 10; // Gán min bằng chữ số cuối cùng của n

    // Dùng vòng lặp để tìm chữ số nhỏ nhất trong n
    for(int i = 1; i <= n; i++){
        value = n % 10; // Lấy chữ số cuối cùng của n
        if(value < min){ // So sánh chữ số hiện tại với min
            min = value; // Nếu chữ số hiện tại nhỏ hơn min, gán min bằng chữ số hiện tại
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
    }

    // In ra chữ số nhỏ nhất trong n
    printf("chu so be nhat la: %d", min);

    return 0;
}
