#include <stdio.h>
#include <math.h>
int main(){
	int n, x;
	float sum=1, value_1, value_2, S=1;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap x: ");
	scanf("%d", &x);
	for(int i=1; i<=n; i++){
		value_1=pow(x, 2*i+1);
		value_2+=2*i+1;
		S*=value_2;
		sum+=value_1/S;
	}
	printf("sum = %.3f", sum);
	return 0;
}