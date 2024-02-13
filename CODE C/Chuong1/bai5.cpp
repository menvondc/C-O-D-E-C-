//Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)

#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	float sum=1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {        // Vòng lặp for sẽ thực thi cho đến khi i không còn nhỏ hơn hoặc bằng n
    	sum += 1.0 / (float(2 * i + 1));  // Cập nhật giá trị của biến sum bằng tổng của sum và 1 chia cho (2 nhân với i cộng 1), chuyển về kiểu dữ liệu float để thực hiện phép chia chính xác
	}
	printf("Tong la: %f", sum);
	return 0;
}