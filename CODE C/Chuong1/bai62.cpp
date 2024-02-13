#include <stdio.h>

int main(){
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    
    // Sử dụng thuật toán Euclid để tính UCLN của a và b
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("UCLN cua a va b la: %d", a); // In ra UCLN của a và b
    return 0;
}
