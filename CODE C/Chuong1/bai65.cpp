#include <stdio.h>

int main(){
    int a, b;
    float x;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    
    printf("Giai pt: %dx + %d = 0", a, b); // In ra phương trình
    
    if(a != 0){
        x = (float)-b / (float)a; // Tính nghiệm của phương trình
        printf("\nx = %.2f", x); // In ra nghiệm với định dạng làm tròn đến 2 chữ số thập phân
    }
    else{
        printf("\nPhuong trinh vo nghiem"); // Trường hợp a == 0, phương trình vô nghiệm
    }
    
    return 0;
}
