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
    if (month >= 1 && month <= 12) {
        // Kiểm tra tháng 2 và tháng 3 (xem có phải năm nhuận không)
        if (month == 2 || month == 3) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                // Kiểm tra nếu ngày là 1 tháng 3 trong năm nhuận
                if (day == 1 && month == 3) {
                    printf("Truoc ngay vua nhap la ngay 29 thang %d nam %d", month - 1, year);
                } else {
                    printf("Truoc ngay vua nhap la: ngay %d thang %d nam %d", day - 1, month, year);
                }
            } else {
                // Kiểm tra nếu ngày là 1 tháng 3 trong năm không nhuận
                if (day == 1 && month == 3) {
                    printf("Truoc ngay vua nhap la: ngay 28 thang %d nam %d", month - 1, year);
                } else {
                    printf("Truoc ke ngay vua nhap la: ngay %d thang %d nam %d", day - 1, month, year);
                }
            }
        } 
        // Kiểm tra các tháng có 30 ngày
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            // Kiểm tra nếu ngày là 1 tháng 1
            if (day == 1 && month == 1) {
                printf("Truoc ngay vua nhap la ngay 30 thang %d nam %d", month - 1, (month == 12) ? year - 1 : year);
            } else {
                printf("Truoc ngay vua nhap la: ngay %d thang %d nam %d", day - 1, month, year);
            }
        } 
        // Các tháng còn lại có 31 ngày
        else {
            // Kiểm tra nếu ngày là 1 tháng 1
            if (day == 1 && month == 1) {
                printf("Truoc ngay vua nhap la ngay 31 thang 12 nam %d", (month == 12) ? year - 1 : year);
            } else {
                printf("Truoc ngay vua nhap la: ngay %d thang %d nam %d", day - 1, month, year);
            }
        }
    } 
    // Tháng không hợp lệ nếu nằm ngoài khoảng từ 1 đến 12
    else {
        printf("Nhap thang khong hop le!");
    }
    return 0;
}
