#include <stdio.h>
int main(){
	int n, i = 1, S = 0;
	scanf("%d", &n);
    while(i <= n){         // Vòng lặp while, lặp từ i=1 đến n
		S += i * 2;        // Cộng vào tổng giá trị của i nhân 2
		i++;               // Tăng i lên một đơn vị
	}
	printf("Tong = %d", S);
	return 0;
}