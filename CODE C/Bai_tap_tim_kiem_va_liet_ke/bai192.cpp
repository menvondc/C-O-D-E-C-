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

// Hàm để kiểm tra xem một số có chứa chữ số chẵn cuối cùng không
bool check(int n){
    int num = n % 10; // Lấy chữ số cuối cùng của số n
    return num % 2 == 0; // Trả về true nếu chữ số cuối cùng là số chẵn, ngược lại trả về false
}

// Hàm để tìm và in ra các số có chứa chữ số chẵn cuối cùng trong mảng
void find(int arr[], int n){
    for(int i=0; i<n; i++){
        if(check(arr[i])){
            printf("\nCac gia tri co chu so chan la: %d\n", arr[i]);
        }
    }
}

int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra các số có chứa chữ số chẵn cuối cùng trong mảng
}
