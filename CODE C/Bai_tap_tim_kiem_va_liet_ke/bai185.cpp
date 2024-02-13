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

// Hàm kiểm tra xem một số có phải là số chính phương hay không
bool check(int n) {
    // Tính căn bậc hai của n
    float num = sqrt(n);
    // Kiểm tra xem căn bậc hai có phải là số nguyên không (số chính phương)
    // Nếu căn bậc hai là số nguyên, tức là n là số chính phương
    return (int)num * (int)num == n;
}

// Hàm để tìm và in ra các số chính phương trong mảng cùng với vị trí của chúng
void find(int arr[], int n) {
    int value = 0;
    // Duyệt qua từng phần tử trong mảng
    for(int i = 0; i < n; i++) {
        // Nếu phần tử hiện tại là số chính phương, gán giá trị của phần tử đó vào biến value
        if(check(arr[i])) {
            value = arr[i];
        }
    }
    // Nếu tìm thấy số chính phương trong mảng
    if(value != 0) {
        // Duyệt qua mảng một lần nữa để in ra các số chính phương cùng với vị trí của chúng
        for(int i = 0; i < n; i++) {
            if(arr[i] == value) {
                printf("\nCac so chinh phuong trong mang: %d\nvitri: %d\n", arr[i], i);
            }
        }
    } else {
        printf("No value"); // Nếu không tìm thấy số chính phương trong mảng
    }
}
	
int main() {
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n); // Gọi hàm find để tìm và in ra các số chính phương trong mảng
}
