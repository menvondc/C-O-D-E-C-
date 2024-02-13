#include <stdio.h>

int main() {
    for (int i=65; i<=90; i++) { // Vòng lặp từ i=65 (mã ASCII của 'A') đến i=90 (mã ASCII của 'Z')
        printf("%c ", i); // In ra ký tự tương ứng với mã ASCII i
    }
    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
