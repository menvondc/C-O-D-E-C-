#include <stdio.h>
#include <math.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm kiểm tra xem một số nguyên n có phải là số nguyên tố hay không
// Trả về 1 nếu là số nguyên tố, ngược lại trả về 0
int check(int n){
    if(n<2){ // Nếu n nhỏ hơn 2 thì không phải số nguyên tố
        return 0;
    }
    for(int i=2; i*i<=n; i++){ // Duyệt qua các ước của n từ 2 đến căn bậc hai của n
        if(n%i==0){ // Nếu n chia hết cho một số i từ 2 đến căn bậc hai của n thì không phải số nguyên tố
            return 0;
        }
    }
    return 1; // Nếu không có ước nào từ 2 đến căn bậc hai của n thì n là số nguyên tố
}

// Hàm đếm và in ra các số nguyên tố trong mảng arr có kích thước n
// Trả về số lượng số nguyên tố trong mảng
int demnguyento(int arr[], int n){
    int count=0; // Biến đếm số lượng số nguyên tố
    printf("Cac so nguyen to la: "); // In ra thông báo
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(check(arr[i])){ // Nếu phần tử arr[i] là số nguyên tố
            printf("%d ", arr[i]); // In ra số nguyên tố
            count++; // Tăng biến đếm lên 1
        }
    }
    return count; // Trả về số lượng số nguyên tố trong mảng
}

// Hàm in ra tất cả các phần tử trong mảng arr có kích thước n
void output(int arr[], int n){
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        printf("%d ", arr[i]); // In ra phần tử arr[i]
    }
}

int main(){
	int n, arr[100];
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	input(arr, n);
	printf("\nCo tat ca: %d", demnguyento(arr, n));
	return 0;
}