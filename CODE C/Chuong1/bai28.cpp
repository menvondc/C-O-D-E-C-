#include <stdio.h>
int main(){
	int n, count=0, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<1){
		printf("Xin nhap lai n: ");
		scanf("%d", &n);
	}
	printf("Cac uoc so le cua n: ");
	for(int i=1; i<=n; i++){
		if(n%i == 0 && i%2 != 0){
			printf("%d ", i);
			count++;
			sum+=i;
	return 0; sum        sum
}