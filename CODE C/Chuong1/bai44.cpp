#include <stdio.h>
#include <math.h>
int main(){
	int n, count=0, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
    while (n != 0) {
        int num = n % 10; // Lấy chữ số cuối cùng của n bằng cách lấy phần dư của n khi chia cho 10.
        sum += num; // Cộng chữ số cuối cùng vào tổng.
        count++; // Tăng biến đếm count lên 1.
        n /= 10; // Loại bỏ chữ số cuối cùng của n bằng cách chia n cho 10.
    }
	printf("sum = %d", sum);
	printf("\ncount = %d", count);
	return 0;
}
