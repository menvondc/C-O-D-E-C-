#include <stdio.h>

// Hàm find nhận một số nguyên n và trả về số lượng chữ số lớn nhất của n
int find(int n){
    int count = 0; // Biến đếm số lượng chữ số lớn nhất
    int max = 0; // Biến lưu giá trị chữ số lớn nhất

    // Dùng vòng lặp để tìm chữ số lớn nhất của n và đếm số lượng chữ số đó
    while(n > 0){
        int digit = n % 10; // Lấy chữ số cuối cùng của n
        if(digit > max){
            max = digit; // Gán max bằng chữ số hiện tại nếu nó lớn hơn max
            count = 1; // Reset biến đếm về 1 vì đã tìm thấy một chữ số lớn nhất mới
        }
        else if(digit == max){
            count++; // Tăng biến đếm nếu chữ số hiện tại bằng với max
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
    }
    return count; // Trả về số lượng chữ số lớn nhất
}

int main(){
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("So chu so lon nhat cua n la: %d", find(n));
    return 0;
}
