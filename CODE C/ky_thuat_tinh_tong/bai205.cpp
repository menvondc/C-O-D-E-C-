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

int TinhTong(int arr[], int n){    // Hàm để tính tổng các phần tử lớn hơn giá trị tuyệt đối của phần tử liền sau nó trong mảng và trả về tổng đó
	int sum=0;                      // Khởi tạo tổng bằng 0
	for(int i=0; i<n-1; i++){       // Vòng lặp qua từng phần tử của mảng, trừ đi một phần tử cuối cùng
		if(arr[i]>abs(arr[i+1])){   // Kiểm tra xem giá trị của phần tử hiện tại có lớn hơn giá trị tuyệt đối của phần tử liền sau không
			sum+=arr[i];            // Nếu có, thêm giá trị của phần tử hiện tại vào tổng
		}
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