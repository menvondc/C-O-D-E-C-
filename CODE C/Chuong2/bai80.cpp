#include <stdio.h>
#include <math.h>
int main(){
	int n, x;
	float sum=0, value, value_1;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap x: ");
	scanf("%d", &x);
	for(int i=1; i<=n; i++){
		sum+=i;
		value=pow(x,i);
		value_1+=value/sum;
	}
	printf("Tong la: %.2f", value_1);
	return 0;
	
	
}