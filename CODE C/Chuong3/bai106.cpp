#include <stdio.h>

int main() {
    int n, tram, chuc, donvi;
    printf("Nhap n co 3 chu so: "); // Nhập số nguyên n có 3 chữ số từ bàn phím
    scanf("%d", &n); // Đọc giá trị của n từ bàn phím
    tram = n / 100; // Tách số hàng trăm của n
    n = n % 100; // Lấy phần dư của n sau khi chia cho 100
    chuc = n / 10; // Tách số hàng chục của n
    donvi = n % 10; // Lấy phần dư của n sau khi chia cho 10
    printf("Hang tram: %d\nHang chuc: %d\nHang don vi: %d\n", tram, chuc, donvi); // In ra các số đã tách
    if (tram >= 1) { // Kiểm tra xem số hàng trăm có lớn hơn hoặc bằng 1 không
        printf("%s", (tram == 1) ? "Mot" : (tram == 2) ? "Hai" : (tram == 3) ? "Ba" : (tram == 4) ? "Bon" : (tram == 5) ? "Nam" : (tram == 6) ? "Sau" : (tram == 7) ? "Bay" : (tram == 8) ? "Tam" : "Chin"); // In ra số hàng trăm theo cách đọc số
        printf(" Tram");
    }
    if (chuc > 0 && chuc != 1) { // Kiểm tra xem số hàng chục có lớn hơn 0 và khác 1 không
        printf("%s", (chuc == 2) ? " Hai" : (chuc == 3) ? " Ba" : (chuc == 4) ? " Bon" : (chuc == 5) ? " Nam" : (chuc == 6) ? " Sau" : (chuc == 7) ? " Bay" : (chuc == 8) ? " Tam" : " Chin"); // In ra số hàng chục theo cách đọc số
        printf("%s", " Muoi ");
    }
    if (chuc == 0) { // Kiểm tra xem số hàng chục có bằng 0 không
        printf("%s", " Linh "); // In ra "Linh"
    }
    if (chuc == 1) { // Kiểm tra xem số hàng chục có bằng 1 không
        printf("%s", " Muoi "); // In ra "Muoi"
    }
    if (donvi > 0) { // Kiểm tra xem số hàng đơn vị có lớn hơn 0 không
        printf("%s", (donvi == 1) ? "Mot" : (donvi == 2) ? "Hai" : (donvi == 3) ? "Ba" : (donvi == 4) ? "Bon" : (donvi == 5) ? "Nam" : (donvi == 6) ? "Sau" : (donvi == 7) ? "Bay" : (donvi == 8) ? "Tam" : "Chin"); // In ra số hàng đơn vị theo cách đọc số
    }
    return 0;
}
