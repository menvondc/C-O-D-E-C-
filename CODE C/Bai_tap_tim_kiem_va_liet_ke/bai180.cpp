#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max 100

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

void find(int arr[], int n){
	int value=0;
	for(int i=1; i < n-1; i++){
		if(arr[i]>abs(arr[i-1]) && arr[i]<arr[i+1]){
			value=arr[i];
		}
	}
	if(value!=0){
		for(int i=0; i<n; i++){
			if(arr[i]==value){
				printf("\nGia tri can tim: %d : vitri: %d", arr[i], i);
			}
		}
	}
	else{
		printf("No value");
	}
}
int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	find(arr, n);

}