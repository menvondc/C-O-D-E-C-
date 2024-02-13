#include <stdio.h>
#include <math.h>
int main(){
	int n, value;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	value=(float)sqrt(n);
	if(value*value==n){
		printf("n la so chinh phuong");
	}
	else{
		printf("n khong la so chinh phuong");
	}
	return 0;
}