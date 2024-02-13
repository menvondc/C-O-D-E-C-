#include <stdio.h>

int main() {
    // Duyệt các số từ 1 đến 100 với bước nhảy là 2
    for(int i = 1; i <= 100; i += 2) {
        // Kiểm tra nếu i khác 5, 7, 9 thì tiếp tục vòng lặp
        if((i != 5) && (i != 7) && (i != 9)) {
            continue; // Chuyển sang lần lặp tiếp theo
        }
        // In ra giá trị của i
        printf("%d ", i);
    }
    return 0;
}
