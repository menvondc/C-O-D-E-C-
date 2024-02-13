#include <stdio.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm tìm giá trị âm lớn nhất trong mảng
void find(int arr[], int n){
	int max = 0; // Khởi tạo max ban đầu là 0 (nếu không có số âm trong mảng)
	for(int i=0; i<n; i++){
		if(arr[i] < 0){ // Nếu phần tử là số âm
			if(arr[i] < max){ // So sánh với max hiện tại
				max = arr[i]; // Gán max bằng giá trị âm nhỏ nhất trong mảng
			}
		}
	}
	for(int i=0; i<n; i++){
		if(arr[i] < 0 && arr[i] > max){ // Tìm số âm lớn nhất trong mảng
			max = arr[i];
		}
	}
	if(max != 0){ // Kiểm tra xem có số âm trong mảng không
		printf("Gia tri am lon nhat la: %d\n", max);
	}
	else{
		printf("-1"); // Nếu không có số âm trong mảng, in ra -1
	}
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm giá trị âm lớn nhất trong mảng
    return 0;
}
