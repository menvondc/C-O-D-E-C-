#include <stdio.h>
#include <math.h>

// Hàm tính giai thừa của một số nguyên
int giaithua(int n) {
    int x = 1;
    for (int i = 1; i <= n; i++)
        x *= i;
    return x;
}

int main() {
    int n, i = 1;
    float x, s = 1, k = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%f", &x);
    
    // Duyệt qua các số từ 1 đến n để tính tổng chuỗi Taylor
    while (i <= n) {
        // Tính giai thừa của i
        s *= i;
        // Tính và cộng từng thành phần của chuỗi Taylor vào tổng k
        k += (pow(-1, (float)i) * pow(x, i)) / s;
        i++;
    }
    printf("Tong la: %.8f", k);
    return 0;
}
