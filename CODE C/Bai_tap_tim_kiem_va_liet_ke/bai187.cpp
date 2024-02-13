	#include <stdio.h> 
#include <math.h>
#include <stdbool.h>
#define Max 100

// Hàm để nhập mảng
void input(int arr[], int n) {
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để tìm và in ra giá trị dương nhỏ nhất trong mảng cùng với vị trí của nó
void find(int arr[], int n) {
    int min;
    bool k = false;
    // Duyệt qua từng phần tử trong mảng
    for(int i = 0; i < n; i++) {
        // Nếu phần tử hiện tại là số dương và chưa có giá trị nhỏ nhất được lưu trữ hoặc nhỏ hơn giá trị nhỏ nhất hiện tại
        if(arr[i] > 0 && (!k || arr[i] < min)) {
            min = arr[i]; // Cập nhật giá trị nhỏ nhất
            k = true; // Đặt biến k thành true để chỉ ra rằng đã tìm thấy số dương đầu tiên
        }
    }
    // Nếu tìm thấy số dương trong mảng
    if(k) {
        // Duyệt qua mảng một lần nữa để in ra số dương nhỏ nhất cùng với vị trí của nó
        for(int i = 0; i < n; i++) {
            if(arr[i] == min) {
                printf("\nCac gia tri duong nho nhat trong mang: %d\nvitri: %d\n", arr[i], i);
            }
        }
    } else {
        printf("No value"); // Nếu không tìm thấy số dương trong mảng
    }
}
	
int main() {
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra giá trị dương nhỏ nhất trong mảng
}