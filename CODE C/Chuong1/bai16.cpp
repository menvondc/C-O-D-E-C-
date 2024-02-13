#include <stdio.h>
#include <math.h>
int main(){
	int n, x;
	float sum=0, value=0;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		value+=i;
		float value1=pow(x,i);
		sum+=value1/value;
	}
	printf("sum = %.2f", sum);
	return 0;
}