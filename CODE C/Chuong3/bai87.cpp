#include <stdio.h>

int main(){
    int n=1, sum=0; // Khai báo biến n để lưu giá trị của số nguyên n và sum để lưu tổng
    while(sum<=10000){ // Vòng lặp while sẽ chạy cho đến khi tổng sum vượt quá hoặc bằng 10000
        sum+=n; // Cộng n vào tổng
        n++; // Tăng giá trị của n lên 1
    }
    printf("So can tim: %d", n-1); // In ra số nguyên n-1 (do sau khi vượt quá 10000, n được tăng lên 1 lần nữa)
    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
