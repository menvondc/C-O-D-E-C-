#include <stdio.h> // Thư viện cho hàm printf và scanf
#include <math.h> // Thư viện cho hàm pow

int main() {
    int n; // Khai báo biến nguyên n để lưu số lần lặp
    float x; // Khai báo biến thực x để lưu giá trị x
    printf("Nhap so nguyen n: "); // Xuất câu thông báo để yêu cầu người dùng nhập giá trị cho n
    scanf("%d", &n); // Nhận giá trị cho n từ người dùng
    printf("Nhap x: "); // Xuất câu thông báo để yêu cầu người dùng nhập giá trị cho x
    scanf("%f", &x); // Nhận giá trị cho x từ người dùng
    for(int i = 1; i <= n; i++) { // Vòng lặp for để tính giá trị của x sau mỗi lần lặp
        x = pow(x, 1.0 / i); // Tính lũy thừa của x^(1/i) và gán kết quả vào biến x
    }
    printf("S = %f", x); // Xuất kết quả tính toán ra màn hình
    return 0; // Kết thúc chương trình
}
