#include <stdio.h>

// Hàm tính điểm trung bình của môn toán và môn văn
double avg(double math, double van) {
    return (math + van) / 2; // Trả về trung bình của math và van
}

int main() {
    char hoten[100]; // Mảng để lưu tên của học sinh
    double math, van; // Biến để lưu điểm của môn toán và môn văn

    // Nhập tên của học sinh
    printf("Nhập họ tên: ");
    gets(hoten);

    // Nhập điểm của môn toán và môn văn
    printf("Nhập điểm môn toán và văn: ");
    scanf("%lf %lf", &math, &van);

    // In ra tên của học sinh
    printf("Tên là: %s\n", hoten);

    // In ra điểm trung bình của học sinh bằng cách gọi hàm avg
    printf("Điểm trung bình là: %f", avg(math, van));	
    
    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
