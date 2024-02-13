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

int TinhTong(int arr[], int n){    // Hàm để tính tổng các phần tử trong mảng mà lớn hơn phần tử trước và nhỏ hơn phần tử sau (nếu có)
	int sum=0;                      // Khởi tạo tổng bằng 0
	if(arr[0]>arr[1]){              // Kiểm tra nếu phần tử đầu tiên lớn hơn phần tử thứ hai
		sum+=arr[0];                // Thêm giá trị của phần tử đầu tiên vào tổng
	}
	for(int i=1; i<n-1; i++){       // Vòng lặp từ phần tử thứ hai đến phần tử liền trước phần tử cuối cùng
		if((arr[i]>arr[i-1] && arr[i]<arr[i+1])){ // Kiểm tra xem phần tử hiện tại lớn hơn phần tử trước và nhỏ hơn phần tử sau
			sum+=arr[i];            // Thêm giá trị của phần tử hiện tại vào tổng
		}						
	}
	if(arr[n-1]>arr[n-2]){          // Kiểm tra nếu phần tử cuối cùng lớn hơn phần tử liền trước
		sum+=arr[n-1];              // Thêm giá trị của phần tử cuối cùng vào tổng
	}
	return sum;                     // Trả về tổng cuối cùng của các phần tử thỏa mãn điều kiện trong mảng
}


int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Tong la: %d", TinhTong(arr, n));

}