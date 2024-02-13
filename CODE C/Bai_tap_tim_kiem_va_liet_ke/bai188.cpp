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

// Hàm để tìm và in ra giá trị chẵn lớn nhất trong mảng cùng với vị trí của nó
void find(int arr[], int n) {
    int max;
    bool k = false;
    // Duyệt qua từng phần tử trong mảng
    for(int i = 0; i < n; i++) {
        // Nếu phần tử hiện tại là số chẵn và chưa có giá trị lớn nhất được lưu trữ hoặc lớn hơn giá trị lớn nhất hiện tại
        if(arr[i] % 2 == 0 && (!k || arr[i] > max)) {
            max = arr[i]; // Cập nhật giá trị lớn nhất
            k = true; // Đặt biến k thành true để chỉ ra rằng đã tìm thấy số chẵn đầu tiên
        }
    }
    // Nếu tìm thấy số chẵn trong mảng
    if(k) {
        // Duyệt qua mảng một lần nữa để in ra số chẵn lớn nhất cùng với vị trí của nó
        for(int i = 0; i < n; i++) {
            if(arr[i] == max) {
                printf("\nCac gia tri chan max trong mang: %d\nvitri: %d\n", arr[i], i);
            }
        }
    } else {
        printf("No value"); // Nếu không tìm thấy số chẵn trong mảng
    }
}
	
int main() {
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra giá trị chẵn lớn nhất trong mảng
}
