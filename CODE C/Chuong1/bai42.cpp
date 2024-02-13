#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int S = 0, k = 1;
    for (int i = 1; S + k < n; i++) { // Sử dụng vòng lặp for để kiểm tra điều kiện S(k) < n
        S += k; // Cập nhật tổng S(k)
        k++; // Tăng giá trị k lên 1
    }
    printf("Gia tri can tim: %d", k - 1); // In ra giá trị nguyên dương lớn nhất thỏa mãn S(k) < n
    return 0;
}
