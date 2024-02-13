#include <stdio.h> 
#include <math.h>
#include <stdbool.h>
#define Max 100

// Hàm để nhập mảng
void input(int arr[], int n) {
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool check(int n) {
    // Trường hợp đặc biệt: nếu n là số nhỏ hơn hoặc bằng 1, không phải là số nguyên tố
    if(n <= 1) {
        return false;
    }
    // Duyệt qua các ước của n để kiểm tra xem n có phải là số nguyên tố hay không
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false; // Nếu n chia hết cho một số khác 1 và chính nó, không phải là số nguyên tố
        }
    }
    return true; // Nếu không chia hết cho số nào khác ngoài 1 và chính nó, là số nguyên tố
}

// Hàm để tìm và in ra các số nguyên tố trong mảng cùng với vị trí của chúng
void find(int arr[], int n) {
    int value = 0;
    // Duyệt qua từng phần tử trong mảng
    for(int i = 0; i < n; i++) {
        // Nếu phần tử hiện tại là số nguyên tố, gán giá trị của phần tử đó vào biến value
        if(check(arr[i])) {
            value = arr[i];
        }
    }
    // Nếu tìm thấy số nguyên tố trong mảng
    if(value != 0) {
        // Duyệt qua mảng một lần nữa để in ra các số nguyên tố cùng với vị trí của chúng
        for(int i = 0; i < n; i++) {
            if(arr[i] == value) {
                printf("\nCac so nguyen to trong mang: %d\nvitri: %d\n", arr[i], i);
            }
        }
    } else {
        printf("No value"); // Nếu không tìm thấy số nguyên tố trong mảng
    }
}
	
int main() {
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra các số nguyên tố trong mảng
}
