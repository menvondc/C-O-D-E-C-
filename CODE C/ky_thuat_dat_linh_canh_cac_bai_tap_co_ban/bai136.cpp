#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm tìm và trả về giá trị lớn nhất chẵn trong mảng
int find(int arr[], int n){
    int max; // Khai báo biến max mà không gán giá trị ban đầu
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]%2==0){ // Nếu phần tử hiện tại là số chẵn
            max=arr[i]; // Gán giá trị của phần tử hiện tại cho max (Đây chỉ là giá trị chẵn đầu tiên, không phải là giá trị lớn nhất)
            if(arr[i]>max){ // Điều kiện này không cần thiết vì max đã được gán giá trị ở trên
                max=arr[i]; // Gán lại giá trị của phần tử hiện tại cho max (Đây là một lỗi logic, vì nó sẽ luôn luôn làm cho max bằng phần tử hiện tại, không phải là giá trị lớn nhất)
            }
        }
    }
    return max; // Trả về giá trị lớn nhất chẵn trong mảng (Thực tế là giá trị chẵn đầu tiên trong mảng)
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	int count = find(arr, n);
	if(count){
		printf("Gia tri chan cuoi cung la: %d", find(arr,n));
	}
	else{
		printf("Tra ve: %d", -1);
	}
	return 0;
}