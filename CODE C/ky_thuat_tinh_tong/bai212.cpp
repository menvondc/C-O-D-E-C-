#include <stdio.h>
#define Max 100

void nhapmang(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void sum(int arr[], int n){         // Hàm tính tổng các số dương trong mảng và in ra giá trị trung bình của chúng
	float tong = 0;                  // Khởi tạo tổng bằng 0
	int count = 0;                   // Khởi tạo biến đếm số lượng các số dương trong mảng
	for(int i = 0; i < n; i++){      // Vòng lặp qua từng phần tử của mảng
		if(arr[i] > 0){              // Kiểm tra xem phần tử có là số dương không
			tong += arr[i];          // Nếu có, thêm giá trị của phần tử này vào tổng
			count++;                 // Tăng biến đếm lên 1
		}
	}
	if(count != 0){                  // Nếu có ít nhất một số dương trong mảng
		printf("Tong la: %f", tong / (float)count);  // In ra giá trị trung bình của các số dương
	}
	else{
		printf("No value");          // Nếu không có số dương nào, in ra thông báo "No value"
	}
}

int main(){
	int n, arr[Max];
	printf("Nhap n: ");
	scanf("%d", &n);
	nhapmang(arr, n);
	sum(arr, n);
}