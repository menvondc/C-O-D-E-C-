#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Hàm để nhập mảng
void input(int arr[], int n){
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm kiểm tra xem một số có phải là số nguyên tố không
bool check(int n){
    // Kiểm tra nếu n là số nhỏ hơn hoặc bằng 1
    if(n <= 1){
        return false; // Trả về false vì số nhỏ hơn hoặc bằng 1 không phải là số nguyên tố
    }
    // Duyệt qua các số từ 2 đến căn bậc hai của n để kiểm tra n có phải là số nguyên tố không
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){ // Nếu n chia hết cho một số từ 2 đến căn bậc hai của n
            return false; // Trả về false vì n không phải là số nguyên tố
        }
    }
    return true; // Trả về true nếu không có số nào từ 2 đến căn bậc hai của n chia hết cho n
}

// Hàm tìm và in ra các số nguyên tố trong mảng và vị trí của chúng
void find(int arr[], int n){
    printf("Cac so nguyen to la:\n");
    for(int i=0; i<n; i++){
        if(check(arr[i])){ // Kiểm tra xem phần tử thứ i có phải là số nguyên tố không
            printf("%d => vitri: %d\n", arr[i], i); // In ra số nguyên tố và vị trí của nó
        }
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm input để nhập mảng
    find(arr, n); // Gọi hàm find để tìm và in ra các số nguyên tố trong mảng và vị trí của chúng
}
