#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
bool check(int b[], int n, int v){
	for(int i=0; i<n; i++){
		if(b[i]==v){ // trùng với giá trị in ra rồi
			return false;
		}
	}
	return true;
}
int find(int arr[], int n, int x){ 
	int hieu=abs(arr[0]-x);
	for(int i=1; i<n; i++){
		if(abs(arr[i]-x)>hieu){
			hieu = abs(arr[i]-x);
		}
	}
	return hieu;
}
void output(int arr[], int n, int x, int hieu){ // int hieu là gọi hàm find để tìm hiệu
	int b[100], count=0;
	for(int i=0; i<n; i++){
		if(abs(arr[i]-x) == hieu && check(b, n, arr[i])){
			printf("%10d", arr[i]);
			b[count++]=arr[i];
		}
	}
}


int main(){
    int arr[100], n, x;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    printf("Nhap x: ");
    scanf("%d", &x);
    int timhieu = find(arr, n, x);
    output(arr, n, x, timhieu);
}