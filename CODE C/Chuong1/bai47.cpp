#include <stdio.h>
#include <math.h>

int main(){
    int n, count=0, value=0, sum=0;

    // Nhập giá trị của n từ người dùng
    printf("Nhap n: ");
    scanf("%d", &n);

    // Kiểm tra nếu n là số âm thì yêu cầu nhập lại
    while(n<0){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }

    // Dùng vòng lặp để xử lý từng chữ số của n
    do{
        for(int i=1; i<=n; i++){
            // Lấy giá trị của chữ số hiện tại
            value=n%10;

            // Kiểm tra xem chữ số hiện tại có phải là chẵn không
            if(value%2 == 0){
                // Cộng giá trị chẵn vào tổng và tăng biến đếm lên 1
                sum+=value;
                count++;
            }

            // Loại bỏ chữ số đã xử lý
            n=n/10;
        }
    }while(n!=0);

    // In ra số lượng chữ số chẵn và tổng của chúng
    printf("\nSo luong chu so chan la: %d", count);
    printf("\nTong cac chu so chan la: %d", sum);

    return 0;
}
