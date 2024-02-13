#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;
    float x, s, k = 0; // Khởi tạo biến s và k
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
    while(i <= n) {
        s = 2 * i + 1; // Tính giá trị của mỗi phần tử s
        float m = pow(x, 2 * i + 1); // Tính x^(2*i+1)
        k = (pow(-1, i + 1) * m) / s; // Tính giá trị của mỗi phần tử k
        i++;
    }
    printf("Tong la: %.8f", k);
    return 0;
}
