#include <stdio.h>

int find(int n){
    int count = 0; // Biến đếm số lượng chữ số nhỏ nhất
    int min = 1e9; // Khởi tạo min bằng một giá trị lớn đủ lớn để đảm bảo rằng tất cả các chữ số đều nhỏ hơn nó (trong trường hợp nguyên tố như là số nguyên)
    
    // Dùng vòng lặp để tìm chữ số nhỏ nhất của n và đếm số lượng chữ số đó
    while(n > 0){
        int digit = n % 10; // Lấy chữ số cuối cùng của n
        if(digit < min){
            min = digit; // Gán min bằng chữ số hiện tại nếu nó nhỏ hơn min
            count = 1; // Reset biến đếm về 1 vì đã tìm thấy một chữ số nhỏ nhất mới
        }
        else if(digit == min){
            count++; // Tăng biến đếm nếu chữ số hiện tại bằng với min
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
    }
    return count; // Trả về số lượng chữ số nhỏ nhất
}
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("So chu so nho nhat cua n la: %d", find(n));
	return 0;
}