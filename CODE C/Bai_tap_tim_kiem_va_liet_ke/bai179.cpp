#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define Max 100

// Hàm để nhập mảng
void input(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để tìm và in ra các giá trị thỏa mãn điều kiện
void find(int arr[], int n) {
    int value = 0;
    for (int i = 1; i < n - 1; i++) {
        // Kiểm tra nếu phần tử hiện tại lớn hơn giá trị tuyệt đối của phần tử đứng trước nó
        if (arr[i] > abs(arr[i - 1])) {
            value = arr[i]; // Lưu giá trị tìm được
        }
    }
    if (value != 0) { // Nếu có giá trị thỏa mãn
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) { // In ra tất cả các vị trí có giá trị bằng value
                printf("\nGia tri can tim: %d : vitri: %d", arr[i], i);
            }
        }
    } else { // Nếu không có giá trị thỏa mãn
        printf("Khong co gia tri thoa man dieu kien.");
    }
}

int main() {
    int arr[Max], n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm và in ra các giá trị thỏa mãn điều kiện

    return 0;
}
