#include <stdio.h>

int main(){
    // Khai báo biến month để lưu tháng và biến year để lưu năm
    int month, year;
    
    // Nhập tháng và năm từ bàn phím
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    
    // Kiểm tra xem tháng có trong khoảng từ 1 đến 12 không
    if(month >= 1 && month <= 12){
        // Kiểm tra xem tháng có phải là tháng 2 không
        if(month == 2){
            // Kiểm tra năm nhuận
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                printf("Nam nhuan, thang %d nam %d co 29 ngay\n", month, year);
            } else{
                printf("Nam ko nhuan thang %d nam %d co 28 ngay\n", month, year);
            }
        } 
        // Kiểm tra các tháng có 30 ngày
        else if(month == 4 || month == 6 || month == 9 || month == 11){
            printf("Thang %d nam %d co 30 ngay\n", month, year);
        } 
        // Các tháng còn lại có 31 ngày
        else{
            printf("Thang %d nam %d co 31 ngay\n", month, year);
        }
    } else{
        printf("Xin nhap dung thang yeu cau");
    }
    return 0;
}
