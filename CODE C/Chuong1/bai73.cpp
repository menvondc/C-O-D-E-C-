	#include <stdio.h>
#include <math.h>

int main() {
    // Khai báo biến cho tổng S, giá trị x, m để tính giai thừa và k để tính giá trị của mỗi phần tử
    float S = 0, x, m = 1, k = 0;
    int n; // Biến n cho số lượng phần tử trong chuỗi
    printf("Nhap n: ");
    scanf("%d", &n); // Nhập giá trị cho n từ người dùng
    printf("Nhap x: ");
    scanf("%f", &x); // Nhập giá trị cho x từ người dùng
    for(int i = 1; i <= n; i++) { // Vòng lặp để tính tổng
        m *= 2 * i; // Tính giai thừa của 2*i
        k = pow(x, 2 * i / m); // Tính giá trị của phần tử thứ i trong chuỗi
        S += pow(-1, i + 1) * k; // Cộng giá trị phần tử vào tổng với dấu tương ứng
    }
    printf("Tong la: %.8f", S); // In ra tổng với độ chính xác 8 chữ số sau dấu thập phân
    return 0;
}
