#include <stdio.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}  

// Hàm tìm số chẵn nhỏ nhất trong mảng
void find(int arr[], int n){
    int min = -1; // Giả sử không có số chẵn nào trong mảng
    int count = 0; // Đếm số lượng số chẵn trong mảng
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){ // Nếu phần tử là số chẵn
            count++; // Tăng biến đếm
            if(min == -1 || arr[i] < min){ // Nếu min chưa được cập nhật hoặc phần tử hiện tại nhỏ hơn min
                min = arr[i]; // Cập nhật giá trị min
            }
        }
    }
    if(count > 0){ // Nếu có ít nhất một số chẵn trong mảng
        printf("So chan nho nhat la: %d\n", min);
    }
    else{
        printf("-1"); // Nếu không có số chẵn nào trong mảng, in ra -1
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số chẵn nhỏ nhất trong mảng
    return 0;
}
