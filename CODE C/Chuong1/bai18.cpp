#include <stdio.h>
#include <math.h>
int main(){
	int n, x;
	float sum=1, value=1, value1=0;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		value+=i*2;
		value1=pow(x,i*(i-1));
		sum+=value1/value;
	}
	printf("sum = %.4f", sum);
	return 0;
}