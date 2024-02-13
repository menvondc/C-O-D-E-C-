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
bool check(int n){                   // Hàm kiểm tra xem một số có là số đối xứng không và trả về true nếu có, ngược lại trả về false
	int sum = 0, value = n;          // Khởi tạo biến sum để tính tổng các chữ số và biến value để lưu giá trị gốc của số n
	while(n != 0){                   // Lặp cho đến khi n khác 0
		int num = n % 10;            // Lấy chữ số cuối cùng của n
		sum = sum * 10 + num;        // Cập nhật giá trị của sum bằng cách đẩy các chữ số sang trái và thêm chữ số cuối cùng của n vào
		n = n / 10;                   // Loại bỏ chữ số cuối cùng của n
	}
	if(value == sum){                // So sánh giá trị gốc của n với giá trị đảo ngược của n
		return true;                 // Nếu giống nhau, trả về true
	}
	return false;                    // Ngược lại, trả về false
}

void find(int arr[], int n){         // Hàm để tìm và in ra tổng các số đối xứng trong mảng
	int sum1 = 0;                    // Khởi tạo tổng bằng 0
	for(int i = 0; i < n; i++){      // Vòng lặp qua từng phần tử của mảng
		if(check(arr[i]) == true){   // Kiểm tra xem phần tử có là số đối xứng không
			sum1 += arr[i];           // Nếu có, thêm giá trị của phần tử này vào tổng
		}
	}
	if(sum1 != 0){                   // Nếu tổng khác 0
		printf("Tong la: %d", sum1); // In ra tổng các số đối xứng
	}
	else{
		printf("No value require");  // Nếu không có số đối xứng nào, in ra thông báo "No value require"
	}
}


int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	find(arr, n);

}