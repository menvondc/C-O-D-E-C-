#include <stdio.h>

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
void find(int arr[], int n, int x){
	int value=0;
	printf("Cac gia tri nguyen thuoc khoan [%d,%d] la: ", x, x);
	for(int i=0; i<n; i++){
		if(arr[i]==x && (arr[i]>=-x && arr[i]<=x)){
			printf("%d ", arr[i]);
		}
	}

}
int main(){
    int arr[100], n, x, y;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    printf("Nhap x: ");
    scanf("%d", &x);
    find(arr, n, x);
}