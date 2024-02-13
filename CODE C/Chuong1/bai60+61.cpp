#include <stdio.h>

// Hàm kiểm tra xem các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
int checkIncreasing(int n){
    int a, b;
    a = n % 10; // Lấy chữ số cuối cùng của n
    n = n / 10; // Loại bỏ chữ số cuối cùng của n
    while(n != 0){
        b = n % 10; // Lấy chữ số cuối cùng của n
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
        if(b < a){ // So sánh chữ số hiện tại với chữ số trước đó
            return 0; // Trả về 0 nếu có chữ số không tăng dần
        }
        a = b; // Gán a bằng chữ số hiện tại để so sánh trong vòng lặp tiếp theo
    }
    return 1; // Trả về 1 nếu tất cả các chữ số đều tăng dần
}

// Hàm kiểm tra xem các chữ số của số nguyên dương n có giảm dần từ trái sang phải hay không
int checkDecreasing(int n){
    int a, b;
    a = n % 10; // Lấy chữ số cuối cùng của n
    n = n / 10; // Loại bỏ chữ số cuối cùng của n
    while(n != 0){
        b = n % 10; // Lấy chữ số cuối cùng của n
        n = n / 10; // Loại bỏ chữ số cuối cùng của n
        if(b > a){ // So sánh chữ số hiện tại với chữ số trước đó
            return 0; // Trả về 0 nếu có chữ số không giảm dần
        }
        a = b; // Gán a bằng chữ số hiện tại để so sánh trong vòng lặp tiếp theo
    }
    return 1; // Trả về 1 nếu tất cả các chữ số đều giảm dần
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(checkIncreasing(n)){
        printf("Cac chu so tang dan");
    }
    else if(checkDecreasing(n)){
        printf("Cac chu so giam dan");
    }
    else{
        printf("Cac chu so khong tang dan va khong giam dan");
    }
    return 0;
}
