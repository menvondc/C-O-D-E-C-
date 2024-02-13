#include <stdio.h>

void nhapmang(int a[], int n){
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}
bool find(int n){
	while(n!=0){
		int num = n%10;
		if(num%2!=0){
			return true;
		}
		n=n/10;
	}
	return false;
}
int output(int a[], int n){
	int max=0;
	for(int i=0; i<n; i++){
		if(find(a[i])){
			if(a[i]>max){
				max=a[i];
			}
		}
	}
	return max;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	nhapmang(a, n);
	printf("Gia tri can tim: %d", output(a, n));
}