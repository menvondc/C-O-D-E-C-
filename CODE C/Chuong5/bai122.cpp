#include <stdio.h>
void nhapmang(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm tìm và trả về giá trị lớn nhất trong mảng
int find(int arr[], int n){
    int max=arr[0]; // Khởi tạo max với giá trị của phần tử đầu tiên trong mảng
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]>max){ // Nếu phần tử hiện tại lớn hơn giá trị hiện tại của max
            max=arr[i]; // Gán giá trị của phần tử hiện tại cho max
        }
    }
    return max; // Trả về giá trị lớn nhất trong mảng
}

int main(){
	int arr[100], n;
	printf("Nhap n: ");
	scanf("%d", &n);
	nhapmang(arr,n);
	printf("Gia tri lon nhat: %d", find(arr,n));
	return 0;
}