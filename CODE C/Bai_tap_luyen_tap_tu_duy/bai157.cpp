#include <stdio.h>

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
void find(int arr[], int n, int x, int y){
	int value=0;
	printf("Cac gia tri nguyen thuoc khoan [%d,%d] la: ", x, y);
	for(int i=0; i<n; i++){
		if(arr[i]%2==0 && (arr[i]>=x && arr[i]<=y)){
			printf("%d ", arr[i]);
		}
	}

}
int main(){
    int arr[100], n, x, y;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    printf("Nhap khoang [x,y]: ");
    scanf("%d %d", &x, &y);
    find(arr, n, x, y);
}