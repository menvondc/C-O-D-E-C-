#include <stdio.h>

int main() {
    int n, chuc, donvi;
    
    // Nhập số nguyên n có hai chữ số từ bàn phím
    printf("Nhap so nguyen n co hai chu so: ");
    scanf("%d", &n);
    
    // Kiểm tra xem n có nằm trong khoảng từ 10 đến 99 không
    if (n >= 10 && n <= 99) {
        // Tách chữ số hàng đơn vị và chục của n
        donvi = n % 10;
        chuc = n / 10;
        
        // In ra chữ số hàng đơn vị và chục
        printf("donvi = %d\n", donvi);
        printf("chuc = %d\n", chuc);

        // In ra phần chục (từ 1 đến 9) theo cách đọc số
        if (chuc >= 1) {
            printf("%s", (chuc == 2) ? "Hai" : (chuc == 3) ? "Ba" : (chuc == 4) ? "Bon" : (chuc == 5) ? "Nam" : (chuc == 6) ? "Sau" : (chuc == 7) ? "Bay" : (chuc == 8) ? "Tam" : "Chin");
            printf(" Muoi ");
        } else if (chuc == 10) {
            printf("Muoi ");
        }
    }
    
    // In ra phần đơn vị (từ 0 đến 9) theo cách đọc số
    if (donvi <= 9) {
        printf("%s", (donvi == 1) ? "Mot" : (donvi == 2) ? "Hai" : (donvi == 3) ? "Ba" : (donvi == 4) ? "Bon" : (donvi == 5) ? "Lam" : (donvi == 6) ? "Sau" : (donvi == 7) ? "Bay" : (donvi == 8) ? "Tam" : "Chin");
    }
    return 0;
}
