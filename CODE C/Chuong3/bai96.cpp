#include <stdio.h>
#include <math.h>

int main() {
    int x, fx=0;
    printf("Nhap x: ");
    scanf("%d", &x);
    
    // Kiểm tra x có lớn hơn hoặc bằng 5 không
    if(x>=5) {
        printf("f(x)=2x^2+5x+9\n");
        // Tính giá trị của hàm số nếu x >= 5
        fx=2*pow(x,2)+5*x+9;
        printf("f(%d) = %d", x, fx); // In ra giá trị của hàm số f(x)
    }
    
    // Nếu x không lớn hơn hoặc bằng 5, thì x sẽ nhỏ hơn 5
    if(x<5) {
        printf("f(x)=-2x^2+4x-9\n");
        // Tính giá trị của hàm số nếu x < 5
        fx=-2*pow(x,2)+4*x-9;
        printf("f(%d) = %d", x, fx); // In ra giá trị của hàm số f(x)
    }
    return 0;
}
