#include <stdio.h>
#include <math.h>
int main(){
	int n, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){   // Vòng lặp for, duyệt từ 1 đến n
        sum += pow(i, 2);          // Bình phương giá trị của i và cộng vào tổng
    }
	printf("sum = %d", sum);
	return 0;
}