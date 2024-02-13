#include <stdbool.h>
#include <math.h>
#include <stdio.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
bool check(int n){
	n=n/10;
	if(n%2!=0){
		return true;
	}
	return false;
}
int find(int arr[], int n){
	for(int i=0; i<n; i++){
		if(check(arr[i])){
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