#include <stdio.h>
int main(){
	int n, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n<1){
		printf("Nhap lai n: ");
		scanf("%d", &n);
	}
	for(int i=1; i<n; i++){
		if(n%i == 0){
			printf("%d ", i);
			sum+=i;
		}
	}
	if(sum==n){
		printf("\nn la so hoan thien");
	}
	else{
		printf("\nn khong la so hoan thien");
	}
}