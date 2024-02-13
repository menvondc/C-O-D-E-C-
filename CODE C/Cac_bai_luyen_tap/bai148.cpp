#include <stdio.h>
#include <math.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}  

// Hàm kiểm tra số nguyên tố
int check(int n){
    if(n <= 1){
        return 0; // Trả về 0 nếu n là số nhỏ hơn hoặc bằng 1 (không phải số nguyên tố)
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0; // Trả về 0 nếu n có thể chia hết cho một số khác 1 và chính nó (không phải số nguyên tố)
        }
    }
    return 1; // Trả về 1 nếu n là số nguyên tố
}

// Hàm tìm số nguyên tố cuối cùng trong mảng
void find(int arr[], int n){
    int value = 0; // Khởi tạo giá trị mặc định là 0 (nếu không tìm thấy số nguyên tố)
    for(int i = 0; i < n; i++){
        if(check(arr[i])){ // Kiểm tra xem phần tử có phải là số nguyên tố không
            value = arr[i]; // Gán giá trị số nguyên tố vào biến value
            for(int j = i + 1; j < n; j++){ // Tiếp tục duyệt từ vị trí sau
                if(check(arr[j])){
                    value = arr[j]; // Nếu tìm thấy số nguyên tố khác, cập nhật giá trị value
                }
            }
            break; // Thoát khỏi vòng lặp ngay khi tìm thấy số nguyên tố cuối cùng
        }
    }
    if(value != 0){ // Kiểm tra xem có tìm thấy số nguyên tố hay không
        printf("So nguyen to cuoi cung la: %d\n", value);
    }
    else{
        printf("-1"); // Nếu không tìm thấy số nguyên tố, in ra -1
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số nguyên tố cuối cùng trong mảng
    return 0;
}
