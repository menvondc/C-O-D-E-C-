#include <stdio.h>
int main(){
	int n, value=1;
	float sum=1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		value+=i;
		sum += 1.0/(float)value;
	}
	printf("sum = %.4f", sum);
	return 0;
}