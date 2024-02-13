#include <stdio.h>
int main(){
	int n, count=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	do{
		n=n/10;
		count++;
	}while(n!=0);
	printf("So luong chu so cua n: %d", count);
}