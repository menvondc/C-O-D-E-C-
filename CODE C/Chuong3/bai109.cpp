#include <stdio.h> // Thư viện cho hàm printf

int main() {
    for(int i = 1; i <= 10; i++) { // Vòng lặp for để duyệt qua các số từ 1 đến 10
        for(int j = 1; j <= 10; j++) { // Vòng lặp for lồng bên trong để tính các bảng cửu chương
            printf("%d x %d = %d\n", i, j, i * j); // In ra kết quả của phép nhân
        }
        printf("\n"); // In ra dòng trắng để ngăn cách giữa các bảng cửu chương
    }
    return 0; // Kết thúc chương trình
}
