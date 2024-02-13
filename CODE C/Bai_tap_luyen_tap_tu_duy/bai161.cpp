#include <stdbool.h>
#include <math.h>
#include <stdio.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
void find(int arr[], int n, int x, int y){
	int value=0;
	for(int i=0; i<n; i++){
		if(arr[i]>=x && arr[i]<=y){
				value=arr[i];
				break;
			}
		}
		if(value!=0){
			printf("%d ", value);
		}
		else{
			printf("-1");
		}
	}

int main(){
	int n, x, y;
	scanf("%d", &n);
	scanf("%d %d", &x, &y);
	int arr[n];
	input(arr, n);
	find(arr, n, x, y);
}