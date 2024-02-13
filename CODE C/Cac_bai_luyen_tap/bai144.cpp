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
        return 0; // Trả về 0 nếu số nhỏ hơn hoặc bằng 1 (không phải số nguyên tố)
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0; // Trả về 0 nếu có thể chia hết cho số nào đó từ 2 đến căn bậc hai của n
        }
    }
    return 1; // Trả về 1 nếu không có số nào từ 2 đến căn bậc hai của n chia hết cho n
}

// Hàm tìm số nguyên tố đầu tiên trong mảng
void find(int arr[], int n){
    int value = -1; // Khởi tạo giá trị mặc định là -1 (nếu không tìm thấy số nguyên tố)
    for(int i = 0; i < n; i++){
        if(check(arr[i])){ // Kiểm tra xem phần tử có phải là số nguyên tố không
            value = arr[i]; // Gán giá trị số nguyên tố đầu tiên vào biến value
            break; // Thoát khỏi vòng lặp ngay khi tìm thấy số nguyên tố
        }
    }
    if(value != -1){ // Kiểm tra xem có tìm thấy số nguyên tố hay không
        printf("So nguyen to dau tien la: %d\n", value);
    }
    else{
        printf("Khong tim thay so nguyen to\n");
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số nguyên tố đầu tiên
    return 0;
}
