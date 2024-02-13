#include <stdbool.h>
#include <math.h>
#include <stdio.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
int check(int n, int k){
	int num = pow(2,k);
	return num==n;
}
int find(int arr[], int n){
	for(int i=0; i<n; i++){
		if(check(arr[i], k)){
			return arr[i];
		}
	}
	return -1;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	input(arr, n);
	printf("Gia tri can tim: %d ", find(arr, n));
}