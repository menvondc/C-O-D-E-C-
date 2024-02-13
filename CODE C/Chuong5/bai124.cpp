#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
}
// Hàm kiểm tra xem mảng có chứa số chẵn nhỏ hơn 2004 hay không
// Trả về 1 nếu có, ngược lại trả về 0
int check(int arr[], int n){
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]%2==0 && arr[i]<2004){ // Nếu phần tử hiện tại là số chẵn và nhỏ hơn 2004
            return 1; // Trả về 1
        }
    }
    return 0; // Nếu không tìm thấy số chẵn nhỏ hơn 2004, trả về 0
}

}
int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr,n);
	if(check(arr,n)){
		printf("Ton tai gia tri!\n");
	}
	else{
		printf("Khong ton tai gia tri!\n");
	}
	return 0;
}