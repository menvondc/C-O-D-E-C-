#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
}
// Hàm tìm giá trị nhỏ nhất trong mảng và in ra giá trị đó cùng với vị trí của nó
void find(int arr[], int n){
    int min=arr[n-1]; // Khởi tạo min bằng giá trị của phần tử cuối cùng trong mảng
    int vitri=0; // Biến để lưu vị trí của giá trị nhỏ nhất
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]<min){ // Nếu phần tử hiện tại nhỏ hơn giá trị hiện tại của min
            min=arr[i]; // Cập nhật giá trị của min
            vitri=i; // Cập nhật vị trí của giá trị nhỏ nhất
        }
    }
    printf("\nmin = %d", min); // In ra giá trị nhỏ nhất
    printf("\nvitri = %d", vitri); // In ra vị trí của giá trị nhỏ nhất
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	find(arr, n);
	return 0;
}