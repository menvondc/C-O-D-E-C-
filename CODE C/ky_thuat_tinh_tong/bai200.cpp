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
int find(int arr[], int n){ // hàm tính tổng
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Tong la: %d", find(arr, n));

}