#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	int sum = 0; //1234
	while(n!=0){
		int num = n%10;
		sum = sum*10 + num;
		n = n/10;
	}
	printf("n sao khi dao nguoc la: %d", sum);
	return 0;
}