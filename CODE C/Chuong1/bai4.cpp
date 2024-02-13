#include <stdio.h>
int main(){
	float n, i = 0.5, S = 0;
	scanf("%f", &n);
	while (i <= n) {        // Vòng lặp while sẽ thực thi cho đến khi i không còn nhỏ hơn hoặc bằng n
    	S = S + i * 2;       // Cập nhật giá trị của biến S bằng tổng của S và i nhân với 2
    	i++;                 // Tăng giá trị của biến i lên 1 sau mỗi lần lặp
	}
	printf("%0.2f", S);
	return 0;
}