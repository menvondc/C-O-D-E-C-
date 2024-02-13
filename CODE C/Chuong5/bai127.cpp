#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm sắp xếp mảng arr có kích thước n theo thứ tự tăng dần
void sort(int arr[], int n){
    for(int i=0; i<n; i++){ // Duyệt qua từng phần tử của mảng
        for(int j=0; j<n-1; j++){ // Duyệt qua từng cặp phần tử liên tiếp
            if(arr[j]>arr[j+1]){ // Nếu phần tử hiện tại lớn hơn phần tử kế tiếp
                int temp=arr[j]; // Hoán đổi giá trị của hai phần tử
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// Hàm in ra các phần tử của mảng arr có kích thước n sau khi sắp xếp
void output(int arr[], int n){
    printf("Mang sau khi sort: "); // In ra thông báo
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        printf("%d ", arr[i]); // In ra phần tử arr[i]
    }
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	sort(arr, n);
	output(arr, n);
	return 0;
}