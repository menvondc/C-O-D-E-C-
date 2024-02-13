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
bool check(int n){                   // Hàm kiểm tra xem chữ số đầu tiên của một số có là số chẵn không và trả về true nếu có, ngược lại trả về false
	while(n >= 10){                   // Lặp cho đến khi n chỉ còn một chữ số
		n = n / 10;                   // Loại bỏ chữ số cuối cùng của n
		if(n % 2 == 0);               // Kiểm tra xem chữ số đầu tiên của n có phải là số chẵn không
		return true;                  // Nếu là số chẵn, trả về true
	}
	return false;                     // Ngược lại, trả về false
}

int TinhTong(int arr[], int n){      // Hàm để tính tổng các phần tử trong mảng mà chữ số đầu tiên của nó là số chẵn
	int sum = 0;                      // Khởi tạo tổng bằng 0
	for(int i = 0; i < n; i++){       // Vòng lặp qua từng phần tử của mảng
		if(num % 2 == 0){             // Kiểm tra xem chữ số đầu tiên của phần tử hiện tại có phải là số chẵn không
			sum += arr[i];            // Nếu là số chẵn, thêm giá trị của phần tử này vào tổng
		}
	}
	return sum;                       // Trả về tổng cuối cùng của các phần tử thỏa mãn điều kiện trong mảng
}

int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Tong la: %d", TinhTong(arr, n));

}