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
int find(int arr[], int n){ // Hàm để tính tổng các giá trị dương trong mảng và trả về tổng đó
	int sum=0;               // Khởi tạo tổng bằng 0
	for(int i=0; i<n; i++){  // Vòng lặp qua từng phần tử của mảng
		if(arr[i]>0){        // Kiểm tra xem phần tử có là giá trị dương không
			sum+=arr[i];     // Nếu có, thêm giá trị đó vào tổng
		}
	}
	return sum;              // Trả về tổng cuối cùng của các giá trị dương trong mảng
}


int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Tong la: %d", find(arr, n));

}