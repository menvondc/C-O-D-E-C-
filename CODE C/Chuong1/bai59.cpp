#include <stdio.h>

// Hàm find nhận một số nguyên n và trả về số đảo ngược của n
int find(int n){
    int reversed = 0; // Khởi tạo biến lưu giá trị đảo ngược của n
    while(n != 0){
        int temp = n % 10; // Lấy chữ số cuối cùng của n
        reversed = (reversed * 10) + temp; // Tạo số đảo ngược bằng cách nhân reversed với 10 và cộng chữ số cuối cùng của n vào
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
    }
    return reversed; // Trả về số đảo ngược của n
}

int main(){
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if(n == find(n)){
        printf("La so doi xung!"); // Nếu số n bằng với số đảo ngược của n, in ra thông báo "La so doi xung!"
    }
    else{
        printf("Khong phai so doi xung"); // Nếu số n không bằng với số đảo ngược của n, in ra thông báo "Khong phai so doi xung"
    }
    return 0;
}
