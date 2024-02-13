#include <stdio.h> 	
#include <stdbool.h>
#include <math.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}  

// Hàm kiểm tra số hoàn thiện
bool check(int n){
    if(n <= 1){
        return false; // Trả về false nếu n nhỏ hơn hoặc bằng 1 (không phải số hoàn thiện)
    }
    int sum = 1; // Khởi tạo tổng là 1 vì 1 luôn là ước của mọi số
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            sum += i; // Cộng thêm ước i vào tổng
            if(i != n / i){
                sum += n / i; // Cộng thêm ước n / i vào tổng (nếu i không phải là ước cuối cùng)
            }
        }
    }
    return (sum == n); // Trả về true nếu tổng các ước của n bằng chính nó
}

// Hàm tìm số hoàn thiện đầu tiên trong mảng
int find(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(check(arr[i])) {
            return arr[i]; // Trả về số hoàn thiện đầu tiên nếu tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy số hoàn thiện
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    printf("So hoan thien dau tien la: %d\n", find(arr, n)); // Gọi hàm để tìm số hoàn thiện đầu tiên
    return 0;
}
