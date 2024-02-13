	#include <stdio.h>
#include <stdbool.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm tìm số âm đầu tiên trong mảng
void find(int arr[], int n){
    int value = 0; // Khởi tạo giá trị mặc định là 0 (nếu không tìm thấy số âm)
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){ // Kiểm tra xem phần tử có là số âm không
            value = arr[i]; // Gán giá trị số âm đầu tiên vào biến value
            break; // Thoát khỏi vòng lặp ngay khi tìm thấy số âm đầu tiên
        }
    }
    if(value != 0){ // Kiểm tra xem có tìm thấy số âm hay không
        printf("So am dau tien la: %d\n", value);
    } else{
        printf("-1"); // Nếu không tìm thấy số âm, in ra -1
    }
}

int main(){
    int n, arr[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số âm đầu tiên trong mảng
    return 0;
}
