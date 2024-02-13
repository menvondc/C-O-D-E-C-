#include <stdio.h>
#include <math.h>

// Hàm tính tổng S(x, n) = -x^2 + x^4 + … + (-1)^n * x^2n
int sum(int n, int x){
    int result = 0; // Khởi tạo biến lưu kết quả
    for(int i = 1; i <= n; i++){
        // Cộng vào kết quả (-1)^i * x^(2*i)
        result += pow(-1, i) * pow(x, 2 * i);
    }
    return result; // Trả về kết quả tổng
}

int main(){
    int n, x;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%d", &x);
    
    // Gọi hàm sum để tính tổng và in ra kết quả
    printf("Tong S(x, n) = %d", sum(n, x));

    return 0;
}
