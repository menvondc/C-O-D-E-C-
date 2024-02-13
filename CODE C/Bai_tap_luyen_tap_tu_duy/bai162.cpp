#include <stdbool.h>
#include <math.h>
#include <stdio.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
int find(int arr[], int n){
	for(int i=1; i<n-1; i++){
		if(arr[i] == arr[i-1]*arr[i+1	]){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	input(arr, n);
	printf("Vi tri: %d ", find(arr, n));
}