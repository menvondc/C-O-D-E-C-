#include <stdbool.h>
#include <math.h>
#include <stdio.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
void find(int arr[], int n){
	int b[100], count=0;
	for(int i=0; i<n; i++){
		if(arr[i]<0){
			if(i=n-1 && arr[i]>-1){
				printf("%d ", arr[i]);
			}
		}
	}
	
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	input(arr, n);
	find(arr, n);
}