#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;

    // Nhập giá trị của a từ bàn phím
    printf("Nhap a: ");
    scanf("%f", &a);

    // Nhập giá trị của b từ bàn phím
    printf("Nhap b: ");
    scanf("%f", &b);

    // Nhập giá trị của c từ bàn phím
    printf("Nhap c: ");
    scanf("%f", &c);

    // In giá trị tuyệt đối của a
    printf("\nSau khi thay đổi a: %f", fabs(a)); // fabs(): hàm trị tuyệt đối

    // In giá trị tuyệt đối của b
    printf("\nSau khi thay đổi b: %f", fabs(b));

    // In giá trị tuyệt đối của c
    printf("\nSau khi thay đổi c: %f", fabs(c));

    return 0;
}
