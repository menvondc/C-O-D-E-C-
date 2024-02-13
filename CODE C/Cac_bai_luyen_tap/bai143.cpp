#include <stdio.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm tìm giá trị chẵn đầu tiên trong mảng
void find(int arr[], int n){
    int value = -1; // Khởi tạo giá trị mặc định là -1 (nếu không tìm thấy giá trị chẵn)
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){ // Kiểm tra xem phần tử có chẵn không
            value = arr[i]; // Gán giá trị chẵn đầu tiên vào biến value
            break; // Thoát khỏi vòng lặp ngay khi tìm thấy giá trị chẵn
        }
    }
    if(value != -1){ // Kiểm tra xem có tìm thấy giá trị chẵn hay không
        printf("Gia tri chan dau tien la: %d\n", value);
    }
    else{
        printf("Khong tim thay gia tri chan\n");
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm giá trị chẵn đầu tiên
    return 0;
}
