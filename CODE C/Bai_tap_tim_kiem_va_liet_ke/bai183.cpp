#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max 100

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

int find(int arr[], int n) {
    int max = arr[0]; // Khởi tạo max với giá trị của phần tử đầu tiên trong mảng
    for(int i = 1; i < n; i++) { // Bắt đầu từ phần tử thứ hai trong mảng
        if(arr[i] > max) {
            max = arr[i]; // Nếu tìm thấy phần tử lớn hơn max, cập nhật max
        }
    }
    return max; // Trả về giá trị lớn nhất
}

int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Gia tri cuc dai la: %d", find(arr, n));

}