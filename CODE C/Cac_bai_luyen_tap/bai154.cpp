#include <stdio.h>

// Hàm nhập mảng
void input(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

// Hàm tìm giá trị âm nhỏ nhất và vị trí của nó trong mảng
void find(int arr[], int n){
	int min = 0; // Giả sử giá trị âm nhỏ nhất là 0 (do không có số âm ban đầu)
	int vitri = -1; // Khởi tạo vị trí của giá trị âm nhỏ nhất là -1 (để kiểm tra xem có giá trị âm nào trong mảng không)
	for(int i = 0; i < n; i++){
		if(arr[i] < 0){ // Nếu phần tử âm
			if(arr[i] < min){ // So sánh với giá trị âm nhỏ nhất hiện tại
				min = arr[i]; // Cập nhật giá trị âm nhỏ nhất
				vitri = i; // Lưu vị trí của giá trị âm nhỏ nhất
			}
		}
	}
	if(vitri != -1){ // Nếu tìm thấy số âm trong mảng
		printf("Gia tri nho nhat: %d\nVi tri nho nhat: %d\n", min, vitri);
	}
	else{
		printf("-1"); // Nếu không có số âm nào trong mảng, in ra -1
	}
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n); // Gọi hàm để nhập mảng
	find(arr, n); // Gọi hàm để tìm giá trị âm nhỏ nhất và vị trí của nó trong mảng
	return 0;
}
