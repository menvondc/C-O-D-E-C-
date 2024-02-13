#include <stdio.h>
#include <math.h>

int main(){
    int n, sum=0; // Khai báo biến n để lưu giá trị của n, và sum để lưu tổng các lũy thừa bậc ba
    printf("Nhap n: ");
    scanf("%d", &n); // Nhập giá trị của n từ người dùng

    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        sum += pow(i,3); // Tính lũy thừa bậc ba của số i và cộng vào tổng sum
    }

    printf("sum = %d", sum); // In ra tổng các lũy thừa bậc ba

    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
