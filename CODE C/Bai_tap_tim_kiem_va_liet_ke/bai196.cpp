#include <stdio.h>

// Hàm để nhập mảng
void input(int arr[], int n){
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để tìm và in ra các giá trị âm trong mảng
void find(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            printf("Cac gia tri am la: %d\n", arr[i]); // In ra các giá trị âm trong mảng
        }
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm input để nhập mảng
    find(arr, n); // Gọi hàm find để tìm và in ra các giá trị âm trong mảng
}
