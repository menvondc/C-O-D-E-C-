#include <stdio.h>
int main(){
	int n, count=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<1){
		printf("Xin nhap lai n: ");
		scanf("%d", &n);
	}
	printf("Cac uoc so cua n: ");
	for(int i=1; i<=n; i++){
		if(n%i == 0){
			printf("%d ", i);
			count++;
		}
	}
	printf("\nCo tat ca %d uoc so", count);
	return 0;
}