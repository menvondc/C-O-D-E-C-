#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max 100

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
bool check(int n){                   // Hàm kiểm tra xem một số có là bình phương của một số nguyên không và trả về true nếu có, ngược lại trả về false
	float num = sqrt(n);              // Tính căn bậc hai của số n
	return ((int)num * (int)num) == n;// Kiểm tra xem số này có bằng bình phương của một số nguyên không
}

int TinhTong(int arr[], int n){      // Hàm để tính tổng các số trong mảng mà là bình phương của một số nguyên và trả về tổng đó
	int sum = 0;                      // Khởi tạo tổng bằng 0
	for(int i = 0; i < n; i++){       // Vòng lặp qua từng phần tử của mảng
		if(check(arr[i])){            // Kiểm tra xem phần tử có phải là bình phương của một số nguyên không
			sum += arr[i];            // Nếu có, thêm giá trị của phần tử này vào tổng
		}
	}
	return sum;                       // Trả về tổng cuối cùng của các số là bình phương của một số nguyên trong mảng
}


int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Tong la: %d", TinhTong(arr, n));

}