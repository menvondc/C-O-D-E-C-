	#include <stdio.h>
void input(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
// Hàm tìm và trả về vị trí đầu tiên của một số chẵn trong mảng
int find(int arr[], int n){
    int max=0; // Khởi tạo max với giá trị mặc định là 0
    int vitri=0; // Khởi tạo biến vitri để lưu vị trí của số chẵn đầu tiên
    for(int i=0; i<n; i++){ // Duyệt qua mảng arr
        if(arr[i]%2==0){ // Nếu phần tử hiện tại là số chẵn
            max=arr[i]; // Gán giá trị của phần tử hiện tại cho max
            vitri=i; // Gán vị trí của phần tử hiện tại cho vitri
            break; // Thoát khỏi vòng lặp vì đã tìm thấy số chẵn đầu tiên
        }
    }
    return vitri; // Trả về vị trí của số chẵn đầu tiên trong mảng
}

int main(){
	int n, arr[100];
	printf("Nhap n: ");
	scanf("%d", &n);
	input(arr, n);
	int count = find(arr,n);
	if(count){
		printf("Vi tri chan dau tien la: %d",find(arr,n));
	}
	else{
		printf("Tra ve: %d", -1);
	}
	return 0;
}