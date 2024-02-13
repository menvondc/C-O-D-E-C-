#include <stdio.h> 	
#include <stdbool.h>
#include <math.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}  

// Hàm kiểm tra số hoàn thiện
bool check(int n){
    if(n<=1){
        return false; // Trả về false nếu n là số nhỏ hơn hoặc bằng 1 (không phải số hoàn thiện)
    }
    int sum=1;
    for(int i=2; i<=sqrt(n); i++){
        if (n % i == 0) {
            sum += i;
            if(i != n / i){
                sum += n / i;
            }
        }
    }
    return (sum == n); // Trả về true nếu tổng các ước của n bằng chính nó (n là số hoàn thiện)
}

// Hàm tìm số hoàn thiện cuối cùng trong mảng
void find(int arr[], int n){
    int value = 0; // Khởi tạo giá trị mặc định là 0 (nếu không tìm thấy số hoàn thiện)
    for(int i = 0; i < n; i++){
        if(check(arr[i])){ // Kiểm tra xem phần tử có phải là số hoàn thiện không
            value = arr[i]; // Gán giá trị số hoàn thiện vào biến value
            for(int j = i + 1; j < n; j++){ // Tiếp tục duyệt từ vị trí sau
                if(check(arr[j])){
                    value = arr[j]; // Nếu tìm thấy số hoàn thiện khác, cập nhật giá trị value
                }
                break; // Thoát khỏi vòng lặp ngay khi tìm thấy số hoàn thiện cuối cùng
            }
        }
    }
    if(value != 0){ // Kiểm tra xem có tìm thấy số hoàn thiện hay không
        printf("So hoan thien cuoi cung la: %d\n", value);
    }
    else{
        printf("-1"); // Nếu không tìm thấy số hoàn thiện, in ra -1
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số hoàn thiện cuối cùng trong mảng
    return 0;
}
