#include <stdio.h>
#include <math.h>
int main(){
	int n, count=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<0){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	if(n<2){
		count=1;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			count=1;
		}
	}
	if(count==1){
		printf("n khong la so nguyen to");
	}
	else{
		printf("n la so nguyen to");
	}
}