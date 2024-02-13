#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm tính tổng các số âm trong mảng arr có kích thước n
int sum(int arr[], int n){
    int sum=0; // Khởi tạo biến sum để lưu tổng các số âm
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]<0){ // Nếu phần tử arr[i] là số âm
            sum+=arr[i]; // Cộng giá trị của phần tử arr[i] vào tổng sum
        }
    }
    return sum; // Trả về tổng các số âm trong mảng
}

int main(){
	int n, arr[100];
	printf("Nhan n: ");
	scanf("%d", &n);
	input(arr, n);
	int tinhtong = sum(arr, n);
	printf("Tong la: %d", tinhtong);
	return 0;
}