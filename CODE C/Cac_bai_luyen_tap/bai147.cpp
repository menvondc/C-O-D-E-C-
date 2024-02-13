#include <stdio.h>
#include <stdbool.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm tìm số dương cuối cùng trong mảng
void find(int arr[], int n){
    int value = 0; // Khởi tạo giá trị mặc định là 0 (nếu không tìm thấy số dương)
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){ // Kiểm tra xem phần tử có là số dương không
            value = arr[i]; // Gán giá trị số dương vào biến value
            for(int j = i + 1; j < n; j++){ // Tiếp tục duyệt từ vị trí sau
                if(arr[j] > 0){
                    value = arr[j]; // Nếu tìm thấy số dương khác, cập nhật giá trị value
                }
            }
            break; // Thoát khỏi vòng lặp ngay khi tìm thấy số dương cuối cùng
        }
    }
    if(value != 0){ // Kiểm tra xem có tìm thấy số dương hay không
        printf("So duong cuoi cung la: %d\n", value);
    }
    else{
        printf("-1"); // Nếu không tìm thấy số dương, in ra -1
    }
}

int main(){
    int n, arr[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số dương cuối cùng trong mảng
    return 0;
}
