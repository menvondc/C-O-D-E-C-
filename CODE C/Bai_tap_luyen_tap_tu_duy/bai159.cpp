#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
int find(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[i]>2003){
			return arr[i];
		}
	}
	return -1;
}
int main(){
	int n, arr[1000];
	scanf("%d", &n);
	input(arr, n);
	if(find(arr, n)){
		printf("Gia tri can tim %d", find(arr, n));
	}
	else{
		printf("-1");
	}
}