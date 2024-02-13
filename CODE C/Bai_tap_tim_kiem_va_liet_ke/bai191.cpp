#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max 100

// Hàm để nhập mảng
void input(int arr[], int n){
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để tìm giá trị lớn nhất trong mảng và trả về giá trị đó
int find(int arr[], int n){
    int max = arr[0]; // Giả sử phần tử đầu tiên là giá trị lớn nhất ban đầu
    for(int i=0; i<n; i++){
        if(arr[i] > max){ // Nếu phần tử thứ i lớn hơn giá trị lớn nhất hiện tại
            max = arr[i]; // Cập nhật giá trị lớn nhất
        }
    }
    return max; // Trả về giá trị lớn nhất trong mảng
}

int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    printf("Gia tri cuc dai la: %d", find(arr, n)); // In ra giá trị lớn nhất trong mảng
}
