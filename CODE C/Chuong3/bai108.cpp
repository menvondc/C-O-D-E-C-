#include <stdio.h> // Thư viện cho hàm printf và scanf
#include <math.h> // Thư viện cho hàm pow

int main() {
    float x; // Khai báo biến thực x để lưu giá trị cơ số
    int y; // Khai báo biến nguyên y để lưu giá trị số mũ
    printf("Nhap co so x: "); // Xuất câu thông báo để yêu cầu người dùng nhập giá trị cho x
    scanf("%f", &x); // Nhận giá trị cho x từ người dùng
    printf("Nhap so mu y: "); // Xuất câu thông báo để yêu cầu người dùng nhập giá trị cho y
    scanf("%d", &y); // Nhận giá trị cho y từ người dùng
    x = pow(x, y); // Tính lũy thừa của x^y và gán kết quả vào biến x
    printf("S = %f", x); // Xuất kết quả tính toán ra màn hình
    return 0; // Kết thúc chương trình
}
