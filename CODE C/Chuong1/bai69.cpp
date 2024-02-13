#include <stdio.h>
#include <math.h>

// Hàm tính tổng S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^(2n+1)
double sum(int n, double x) {
    double result = 0; // Khởi tạo biến lưu kết quả
    for (int i = 1; i <= n; i++) {
        // Cộng vào kết quả (-1)^i * x^(2*i + 1)
        result += pow(-1, i) * pow(x, 2 * i + 1);
    }
    return result; // Trả về kết quả tổng
}

int main() {
    int n;
    double x;

    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);

    // Gọi hàm sum để tính tổng và in ra kết quả
    printf("Tong S(x, n) = %lf\n", sum(n, x));

    return 0;
}
