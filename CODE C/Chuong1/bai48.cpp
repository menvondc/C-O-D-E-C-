#include <stdio.h>
#include <math.h>

int main(){
    int n, count=0, value=0, product=1; // Khai báo biến và khởi tạo giá trị ban đầu

    // Nhập giá trị của n từ người dùng và kiểm tra nếu n là số âm thì yêu cầu nhập lại
    printf("Nhap n: ");
    scanf("%d", &n);
    while(n<0){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }

    // Dùng vòng lặp để xử lý từng chữ số của n
    do{
        for(int i=1; i<=n; i++){
            // Lấy giá trị của chữ số hiện tại
            value = n % 10;

            // Kiểm tra xem chữ số hiện tại có phải là lẻ không
            if(value % 2 != 0){
                // Nhân giá trị lẻ vào tích và tăng biến đếm lên 1
                product *= value;
                count++;
            }

            // Loại bỏ chữ số đã xử lý
            n = n / 10;
        }
    }while(n > 1); // Vòng lặp sẽ tiếp tục cho đến khi n không còn lớn hơn 1 nữa

    // In ra số lượng chữ số lẻ và tích của chúng
    printf("\nSo luong chu so le la: %d", count);
    printf("\nTich cac chu so le la: %d", product);

    return 0;
}
