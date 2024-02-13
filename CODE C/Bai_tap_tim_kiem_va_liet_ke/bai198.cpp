	#include <stdio.h>
#include <stdbool.h>

// Hàm để nhập mảng
void input(int arr[], int n){
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để tìm và in ra giá trị lớn nhất trong mảng và vị trí của nó
void find(int arr[], int n){
    int max=arr[0]; // Khởi tạo giá trị lớn nhất là phần tử đầu tiên trong mảng
    for(int i=0; i<n; i++){
        if(arr[i]>max){ // Nếu phần tử thứ i lớn hơn giá trị lớn nhất hiện tại
            max=arr[i]; // Cập nhật giá trị lớn nhất là phần tử thứ i
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==max){ // Nếu phần tử thứ i bằng giá trị lớn nhất
            printf("%d => vitri: %d\n", max, i); // In ra giá trị lớn nhất và vị trí của nó
        }
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm input để nhập mảng
    find(arr, n); // Gọi hàm find để tìm và in ra giá trị lớn nhất trong mảng và vị trí của nó
}
