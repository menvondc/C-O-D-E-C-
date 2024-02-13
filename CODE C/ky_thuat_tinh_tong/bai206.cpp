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

int TinhTong(int arr[], int n){    // Hàm để tính tổng các phần tử trong mảng mà lớn hơn cả phần tử trước và sau nó (nếu có)
	int sum=0;                      // Khởi tạo tổng bằng 0
	for(int i=0; i<n; i++){         // Vòng lặp qua từng phần tử của mảng
		if(i==0 && arr[i]>arr[i+1]){   // Nếu là phần tử đầu tiên và lớn hơn phần tử liền sau
			sum+=arr[i];                // Thêm giá trị của phần tử này vào tổng
		}
		if(i!=0 && i!=n-1 && (arr[i]>arr[i-1] && arr[i]>arr[i+1])){ // Nếu không phải là phần tử đầu hoặc cuối và lớn hơn cả phần tử trước và sau
			sum+=arr[i];                // Thêm giá trị của phần tử này vào tổng
		}
		if(i==n-1 && arr[i]>arr[i-1]){ // Nếu là phần tử cuối cùng và lớn hơn phần tử liền trước
			sum+=arr[i];                // Thêm giá trị của phần tử này vào tổng
		}								// phan tu cuoi
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