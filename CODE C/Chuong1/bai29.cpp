#include <stdio.h>
int main(){
	int n, sum=0, max=0, min=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<1){
		printf("Xin nhap lai n: ");
		scanf("%d", &n);
	}
	printf("Cac uoc so le cua n: ");
	for (int i = 1; i <= n; i++) { // Vòng lặp for từ i=1 đến i=n để kiểm tra từng số nguyên dương có là ước số lẻ của n hay không.
    if (n % i == 0 && i % 2 != 0) { // Kiểm tra xem i có phải là ước số lẻ của n không.
        printf("%d ", i); // Nếu là ước số lẻ của n, in giá trị của i.
        max = i; // Gán giá trị của i cho biến max.
        if (i > max) { // Kiểm tra xem giá trị của i có lớn hơn giá trị hiện tại của max không.
            max = i; // Nếu có, cập nhật giá trị của max bằng giá trị mới của i.
        }
    }
}

	printf("\nUoc so le be nhat = %d", max);
	return 0;
}