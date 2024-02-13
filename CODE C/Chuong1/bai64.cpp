#include <stdio.h>
#include <math.h>

int main(){
    int delta = 0, a, b, c, x1, x2;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    
    printf("Giai pt: %dx^2 + %dx + %d = 0", a, b, c); // In ra phương trình
    
    if(a != 0){
        delta = pow(b, 2) - 4 * a * c; // Tính delta
        printf("\nDelta = %d", delta);
        
        if(delta > 0){
            printf("\nPhuong trinh co 2 nghiem phan biet");
            x1 = (-b + sqrt(delta)) / (2 * a); // Tính nghiệm thứ nhất
            x2 = (-b - sqrt(delta)) / (2 * a); // Tính nghiệm thứ hai
            printf("\nx1 = %d", x1);
            printf("\nx2 = %d", x2);
        }
        else if(delta == 0){
            printf("\nPhuong trinh co nghiem kep");
            x1 = -b / (2 * a); // Tính nghiệm kép
            printf("\nx1 = x2 = %d", x1);
        }
        else{
            printf("\nPhuong trinh vo nghiem"); // Trường hợp delta < 0, phương trình vô nghiệm
        }
    }
    else{
        printf("\nKhong phai phuong trinh bac 2"); // Trường hợp a == 0, không phải phương trình bậc 2
    }
    
    return 0;
}
