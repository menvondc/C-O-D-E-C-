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

// Hàm để tìm và in ra giá trị âm đầu tiên trong mảng cùng với vị trí của nó
void find(int arr[], int n) {
    int value = 0;
    // Duyệt qua từng phần tử trong mảng
    for(int i = 0; i < n; i++) {
        // Nếu phần tử hiện tại là số âm, gán giá trị của phần tử đó vào biến value và dừng vòng lặp
        if(arr[i] < 0) {
            value = arr[i];
            break;
        }
    }
    // Nếu tìm thấy số âm trong mảng
    if(value) {
        // Duyệt qua mảng một lần nữa để in ra số âm đầu tiên cùng với vị trí của nó
        for(int i = 0; i < n; i++) {
            if(arr[i] == value) {
                printf("\nCac gia tri am dau tien trong mang: %d\nvitri: %d\n", arr[i], i);
            }
        }
    } else {
        printf("No value"); // Nếu không tìm thấy số âm trong mảng
    }
}
	
int main() {
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra giá trị âm đầu tiên trong mảng
}
