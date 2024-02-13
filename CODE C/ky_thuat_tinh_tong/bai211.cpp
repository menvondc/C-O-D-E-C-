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
bool check(int n){                   // Hàm kiểm tra xem số có chữ số chẵn không và trả về true nếu có, ngược lại trả về false
	while(n >= 10){                   // Lặp cho đến khi n chỉ còn một chữ số
		n = n / 10;                   // Loại bỏ chữ số cuối cùng của n
		if(n % 2 == 0){               // Kiểm tra xem chữ số cuối cùng của n có phải là số chẵn không
			return true;              // Nếu là số chẵn, trả về true
		}
	}
	return false;                     // Ngược lại, trả về false
}

void find(int arr[], int n){         // Hàm để tìm và in ra tổng các số có chữ số chẵn trong mảng
	int sum1 = 0;                    // Khởi tạo tổng bằng 0
	for(int i = 0; i < n; i++){      // Vòng lặp qua từng phần tử của mảng
		if(check(arr[i]) == true){   // Kiểm tra xem phần tử có chữ số chẵn không
			sum1 += arr[i];           // Nếu có, thêm giá trị của phần tử này vào tổng
		}
	}
	if(sum1 != 0){                   // Nếu tổng khác 0
		printf("Tong la: %d", sum1); // In ra tổng các số có chữ số chẵn
	}
	else{
		printf("No value require");  // Nếu không có số nào thỏa mãn điều kiện, in ra thông báo "No value require"
	}
}


int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	find(arr, n);

}