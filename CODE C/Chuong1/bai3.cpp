#include <stdio.h>
int main(){
	int n, i = 1;
	float S = 0;
	scanf("%d", &n);
	while(i <= n){             // Vòng lặp while sẽ được thực hiện cho đến khi i không còn nhỏ hơn hoặc bằng n
    S = S + 1.0 / (2 * i); // Cập nhật giá trị của biến S bằng tổng của S và 1 chia cho (2 nhân với i)
    i++;                   // Tăng giá trị của biến i lên 1 sau mỗi lần lặp
}

	printf("Tong = %0.2f", S);
	return 0;
}