	#include <stdio.h>
#include <stdbool.h> // Thêm thư viện bool

// Hàm để nhập mảng
void input(int arr[], int n){
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để kiểm tra xem một số có chứa chữ số lẻ đầu tiên không
bool check(int n){
    // Sử dụng vòng lặp để duyệt qua từng chữ số của số n
    while(n != 0){
        n = n / 10; // Lấy phần nguyên của n để lấy chữ số cuối cùng
        if(n % 2 != 0){ // Nếu chữ số cuối cùng là số lẻ
            return true; // Trả về true
        }
    }
    return false; // Trả về false nếu không tìm thấy chữ số lẻ
}

// Hàm để tìm và in ra các giá trị trong mảng có chứa chữ số lẻ đầu tiên
void find(int arr[], int n){
    for(int i=0; i<n; i++){
        if(check(arr[i]) == true){ // Nếu giá trị arr[i] có chứa chữ số lẻ đầu tiên
            printf("Cac gia tri co chu so le dau tien la: %d\n", arr[i]); // In ra giá trị đó
        }
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm input để nhập mảng
    find(arr, n); // Gọi hàm find để tìm và in ra các giá trị trong mảng có chứa chữ số lẻ đầu tiên
}
