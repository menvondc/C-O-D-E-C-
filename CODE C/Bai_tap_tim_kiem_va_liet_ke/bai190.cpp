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

// Hàm kiểm tra xem một số có chứa toàn chữ số lẻ không
bool check(int n){
    while(n != 0){
        int digit = n % 10; // Lấy chữ số cuối cùng của số n
        if(digit % 2 != 0){ // Nếu chữ số đó là số lẻ
            return true; // Trả về true
        }
        n = n / 10; // Loại bỏ chữ số cuối cùng của số n
    }
    return false; // Trả về false nếu không có chữ số lẻ nào trong số n
}

// Hàm để tìm và in ra các số có tất cả các chữ số đều là số lẻ trong mảng
void find(int arr[], int n){
    for(int i=0; i<n; i++){
        if(check(arr[i])){
            printf("\nCac gia tri co all chu so le la: %d\n", arr[i]);
        }
    }
}

int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra các số có tất cả các chữ số đều là số lẻ trong mảng
}
