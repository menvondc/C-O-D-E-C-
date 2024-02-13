#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if((a>0 && b>0) || (a<0 && b<0)){
    printf("Ca 2 cung dau"); // Nếu cả a và b đều lớn hơn 0 hoặc cả hai đều nhỏ hơn 0, tức là cùng dấu
}
else{
    printf("Ca 2 khac dau"); // Ngược lại, nếu a và b khác dấu nhau
}

	return 0;
}