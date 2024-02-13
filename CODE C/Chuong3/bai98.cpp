// Bài 98: Lập chương trình giải hệ: ax + by = c, Dx + ey = f. Các hệ số nhập từ bàn phím
#include <stdio.h>

int main(){
    // Khai báo các biến và khởi tạo giá trị ban đầu
    float a, b, c, d, e, f, x, y;
    float D=0, Dx=0, Dy=0;
    
    // Nhập các hệ số từ bàn phím
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    printf("Nhap he so d: ");
    scanf("%f", &d);
    printf("Nhap he so e: ");
    scanf("%f", &e);
    printf("Nhap he so f: ");
    scanf("%f", &f);
    
    // In ra hệ phương trình
    printf("%.1fx + %.1fy = %.1f", a, b, c);
    printf("\n%.1fx + %.1fy = %.1f\n", d, e, f);
    
    // Tính các đại lượng D, Dx, Dy
    D = a*e - b*d;
    Dx = c*e - f*b;
    Dy = a*f - c*d;
    
    // Kiểm tra và in ra kết quả
    if(D != 0){
        printf("He co nghiem duy nhat la x = %f\n", x = Dx/D);
        printf("He co nghiem duy nhat la y = %f\n", y = Dy/D);
    }
    else if (Dx == 0 && Dy == 0){
        printf("He co vo so nghiem\n");
    }
    else{
        printf("He vo nghiem");
    }
    return 0;
}
