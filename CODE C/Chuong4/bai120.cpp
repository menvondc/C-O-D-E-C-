#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số n có phải là số chính phương không
// Trả về true nếu là số chính phương, ngược lại trả về false
bool check(int n){
    float a = sqrt(n); // Tính căn bậc hai của n
    return (int)a * (int)a == n; // Kiểm tra xem căn bậc hai của n có phải là số nguyên không và bình phương của nó có bằng n không
}

// Hàm in ra các số chính phương nhỏ hơn n
void print(int n){
    printf("Cac so chinh phuong nho hon n la: "); // In ra thông báo
    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        if(check(i) && i<n){ // Nếu số i là số chính phương và nhỏ hơn n
            printf("%d ", i); // In ra số chính phương i
        }
    }
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	print(n);
}