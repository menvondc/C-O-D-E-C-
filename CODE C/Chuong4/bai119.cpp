#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số n có phải là số nguyên tố không
// Trả về 1 nếu là số nguyên tố, ngược lại trả về 0
int check(int n){
    if(n<2){ // Nếu n nhỏ hơn 2 thì không phải là số nguyên tố
        return 0;
    }
    for(int i=2; i*i<=n; i++){ // Duyệt qua các ước của n từ 2 đến căn bậc hai của n
        if(n%i==0){ // Nếu n chia hết cho một số i từ 2 đến căn bậc hai của n thì không phải là số nguyên tố
            return 0;
        }
    }
    return 1; // Nếu không có ước nào từ 2 đến căn bậc hai của n thì n là số nguyên tố
}

// Hàm in ra các số nguyên tố nhỏ hơn n
void print(int n){
    printf("Cac so nguyen to nho hon n la: "); // In ra thông báo
    for(int i=1; i<=n; i++){ // Duyệt qua các số từ 1 đến n
        if(check(i) && i<n){ // Nếu số i là số nguyên tố và nhỏ hơn n
            printf("%d ", i); // In ra số nguyên tố i
        }
    }
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	print(n);
}