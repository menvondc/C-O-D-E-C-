#include <stdio.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm tìm giá trị nhỏ nhất trong mảng
int find(int arr[], int n){
    int min = arr[0]; // Giả sử phần tử đầu tiên là nhỏ nhất
    for(int i = 1; i < n; i++){ // Bắt đầu từ phần tử thứ 2
        if(arr[i] < min){ // So sánh với giá trị nhỏ nhất hiện tại
            min = arr[i]; // Nếu phần tử hiện tại nhỏ hơn, gán lại giá trị nhỏ nhất
        }
    }
    return min;
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    printf("Gia tri min la: %d", find(arr, n)); // Gọi hàm để tìm giá trị nhỏ nhất và in ra
    return 0;
}
	