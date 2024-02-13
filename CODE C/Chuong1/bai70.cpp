#include <stdio.h>
#include <math.h>

// Hàm tính tổng S(n) = 1 - 1/2 + 1/3 - 1/4 + ... + (-1)^(n+1) * 1/n
float sum(int n){
    float x = 1, y = 0; // Khởi tạo biến x để lưu tổng và biến y để tính mẫu số
    for(int i = 1; i <= n; i++){
        y += i; // Cộng thêm i vào mẫu số
        x += pow(-1, i + 1) * (1.0 / y); // Cộng vào tổng phần tử tiếp theo
    }
    return x; // Trả về tổng
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    // Gọi hàm sum để tính tổng và in ra kết quả
    printf("Tong la: %.8f", sum(n)); 

    return 0;
}
