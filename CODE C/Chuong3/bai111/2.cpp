//   *              *
//  * *            ***
// *   *          *****
//*******        *******
#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        // In khoảng trắng trước các dấu '*' ở mỗi hàng
        for(int j = i; j < n; j++) {
            printf(" ");
        }

        // In ra dấu '*' ở hàng đầu tiên hoặc hàng cuối cùng
        // hoặc ở các cạnh bên trái và phải của tam giác
        for(int k = 1; k <= (2 * i - 1); k++) {
            if(i == 1 || i == n || k == 1 || k == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // Xuống dòng để chuyển sang hàng tiếp theo của tam giác
        printf("\n");
    }

    return 0;
}

