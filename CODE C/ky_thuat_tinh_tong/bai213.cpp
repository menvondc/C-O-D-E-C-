#include <stdio.h>
#define Max 100

void nhapmang(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void sum(int arr[], int n, int x){  // Hàm tính tổng các số trong mảng lớn hơn một ngưỡng xác định và in ra giá trị trung bình của chúng
	float tong = 0;                  // Khởi tạo tổng bằng 0
	int count = 0;                   // Khởi tạo biến đếm số lượng các số lớn hơn ngưỡng trong mảng
	for(int i = 0; i < n; i++){      // Vòng lặp qua từng phần tử của mảng
		if(arr[i] > x){              // Kiểm tra xem phần tử có lớn hơn ngưỡng không
			tong += arr[i];          // Nếu có, thêm giá trị của phần tử này vào tổng
			count++;                 // Tăng biến đếm lên 1
		}
	}
	if(count != 0){                  // Nếu có ít nhất một số lớn hơn ngưỡng trong mảng
		printf("Tong la: %f", tong / (float)count);  // In ra giá trị trung bình của các số lớn hơn ngưỡng
	}
	else{
		printf("No value");          // Nếu không có số nào lớn hơn ngưỡng, in ra thông báo "No value"
	}
}

int main(){
	int n, arr[Max], x;
	printf("Nhap n: ");
	scanf("%d", &n);
	nhapmang(arr, n);
	printf("Nhap x: ");
	scanf("%d", &x);
	sum(arr, n, x);
}