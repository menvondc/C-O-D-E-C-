#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm tìm và trả về giá trị đầu tiên lớn hơn 0 trong mảng
int find(int arr[], int n){
    int value=0; // Khởi tạo biến value với giá trị mặc định là 0
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]>0){ // Nếu phần tử hiện tại lớn hơn 0
            value=arr[i]; // Gán giá trị của phần tử hiện tại cho value
            break; // Thoát khỏi vòng lặp
        }
    }
    return value; // Trả về giá trị đầu tiên lớn hơn 0 trong mảng, nếu không có trả về giá trị mặc định 0
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	int count = find(arr, n);
	if(count){
		printf("Gia tri duong dau tien la: %d", find(arr,n));
	}
	else{
		printf("Tra ve: %d", -1);
	}
	return 0;
}