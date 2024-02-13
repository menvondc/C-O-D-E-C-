#include <stdio.h>
int main(){
	int n, sum=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
		sum+=i;
	printf("Tong = %d", sum);
	return 0;
}