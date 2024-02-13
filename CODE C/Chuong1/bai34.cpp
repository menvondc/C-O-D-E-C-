#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x = 1;
    printf("Nhập n: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
        x = sqrt(x + i); // Đảm bảo tính căn bậc 2 cho mỗi thành phần trước khi cộng vào x.
    printf("sum = %.8f", x);
    return 0;
}
