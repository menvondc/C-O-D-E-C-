#include <stdio.h>

int main(){
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
        int sum_day = 0;
        // Tính tổng số ngày từ đầu năm đến tháng trước đó
        for(int i = 1; i < month; i++){
            switch(i){
                case 4:
                case 6:
                case 9:
                case 11:
                    sum_day += 30;
                    break;
                case 2:
                    // Kiểm tra nếu là năm nhuận thì tháng 2 có 29 ngày, ngược lại là 28 ngày
                    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                        sum_day += 29;
                    }
                    else{
                        sum_day += 28;
                    }
                    break;
                default:
                    sum_day += 31;
            }
        }
        // Cộng thêm số ngày trong tháng đã nhập
        sum_day += day;
        // In ra ngày đó là ngày thứ mấy trong năm
        printf("Ngay thu %d trong nam %d", sum_day, year);
    }
}
