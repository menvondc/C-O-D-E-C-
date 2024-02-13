#include <stdio.h>
#include <math.h>

int main() {
    // Khai báo biến a, b, c để lưu các hệ số của phương trình bậc hai và biến D để lưu đại lượng delta
    int a, b, c;
    float D;
    
    // Nhập các hệ số từ bàn phím
    printf("Nhap cac he so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // In ra phương trình bậc hai có dạng ax^2 + bx + c = 0
    printf("pt: %dx^2 + %dx + %d = 0\n", a, b, c);
    
    // Tính đại lượng delta
    D = pow((float)b, 2) - 4 * a * c;
    printf("D = %d\n", D);
    
    // Kiểm tra và in ra nghiệm của phương trình
    if (D > 0) {
        printf("pt co 2 no phan biet:\nx1 = %f, x2 = %f\n", (-(float)b + sqrt(D)) / (2 * (float)a), (-(float)b - sqrt(D)) / (2 * (float)a));
    } else if (D == 0) {
        printf("pt co nghiem kep: x = %f\n", (float)-b / (2 * a));
    } else {
        printf("pt vo nghiem\n");
    }

    return 0;
}
