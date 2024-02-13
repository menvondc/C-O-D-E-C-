#include <stdio.h>

int main(){
    int m=1, sum=0; // Khai báo biến m để lưu số nguyên m và sum để lưu tổng các số từ 1 đến m
    while(sum+m<=10000){ // Vòng lặp while sẽ tiếp tục chạy cho đến khi tổng sum vượt quá hoặc bằng 10000
        sum+=m; // Cộng m vào tổng
        m++; // Tăng giá trị của m lên 1
    }
    printf("So can tim: %d", m-1); // In ra số nguyên m-1 (do sau khi vượt quá 10000, m được tăng lên 1 lần nữa)
    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
