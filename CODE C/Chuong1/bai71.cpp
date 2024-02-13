#include <stdio.h>
#include <math.h>

// Hàm tính tổng của dãy
float sum(int n, int x) {
    float S = 0; // Khởi tạo tổng S là 0
    float y = 0; // Biến y để tính tổng các số từ 1 đến i
    for(int i = 1; i <= n; i++) { // Duyệt qua các phần tử từ 1 đến n
        y += i; // Tính tổng các số từ 1 đến i
        // Tính giá trị của phần tử thứ i và cộng vào tổng S
        S += pow(-1, i) * pow(x, i / y);
    }
    return S; // Trả về tổng S
}

int main() {
    int n, x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    // Gọi hàm sum() để tính tổng và in ra kết quả
    printf("Tong la: %.8f", sum(n, x)); 
    return 0;
}
