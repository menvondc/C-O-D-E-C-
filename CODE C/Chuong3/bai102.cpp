#include <stdio.h>

int main() {
    // Khai báo biến day, month, year để lưu ngày, tháng và năm
    int day, month, year;
    
    // Nhập ngày, tháng và năm từ bàn phím
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    
    // In ra thông tin ngày tháng năm vừa nhập
    printf("Input: ngay %d thang %d nam %d\n", day, month, year);

    // Kiểm tra xem tháng có trong khoảng từ 1 đến 12 không
    if(month >= 1 && month <= 12){
        // Kiểm tra tháng 2 (xem có phải năm nhuận không)
        if(month == 2){
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                printf("Nam nhuan, thang %d co 29 ngay\n", month);
                // Kiểm tra nếu ngày là 29, thì ngày kế tiếp là ngày 1 tháng tiếp theo
                if(day == 29){
                    printf("Ngay ke ngay vua nhap la ngay 1 thang %d nam %d", month + 1, year);
                } else{
                    printf("Ngay ke ngay vua nhap la: ngay %d thang %d nam %d", day + 1, month, year);
                }
            } else{
                printf("Nam khong nhuan, thang %d co 28 ngay\n", month);
                // Kiểm tra nếu ngày là 28, thì ngày kế tiếp là ngày 1 tháng tiếp theo
                if(day == 28){
                    printf("Ngay ke ngay vua nhap la: ngay 1 thang %d nam %d", month + 1, year);
                } else{
                    printf("Ngay ke ngay vua nhap la: ngay %d thang %d nam %d", day + 1, month, year);
                }
            }
        } 
        // Kiểm tra các tháng có 30 ngày
        else if(month == 4 || month == 6 || month == 9 || month == 11){
            printf("Thang %d co 30 ngay\n", month);
            // Kiểm tra nếu ngày là 30, thì ngày kế tiếp là ngày 1 tháng tiếp theo
            if(day == 30){
                printf("Ngay ke ngay vua nhap la ngay 1 thang %d nam %d", month + 1, (month == 12) ? year + 1 : year);
            } else{
                printf("Ngay ke ngay vua nhap la: ngay %d thang %d nam %d", day + 1, month, year);
            }
        } 
        // Các tháng còn lại có 31 ngày
        else{
            printf("Thang %d co 31 ngay\n", month);
            // Kiểm tra nếu ngày là 31, thì ngày kế tiếp là ngày 1 tháng 1 năm tiếp theo
            if(day == 31){
                printf("Ngay ke ngay vua nhap la ngay 1 thang 1 nam %d", (month == 12) ? year + 1 : year);
            } else{
                printf("Ngay ke ngay vua nhap la: ngay %d thang %d nam %d", day + 1, month, year);
            }
        }
    } 
    // Tháng không hợp lệ nếu nằm ngoài khoảng từ 1 đến 12
    else{
        printf("Nhap thang khong hop le!");
    }
    return 0;
}
