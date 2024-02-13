#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm tìm giá trị lớn nhất trong mảng và trả về giá trị đó
int find(int arr[], int n){
    int max=arr[0]; // Khởi tạo biến max bằng giá trị đầu tiên của mảng
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]>max){ // Nếu phần tử hiện tại lớn hơn max
            max=arr[i]; // Gán giá trị của phần tử hiện tại cho max
        }
    }
    return max; // Trả về giá trị lớn nhất trong mảng
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	printf("max = %d", find(arr,n));
	return 0;
}