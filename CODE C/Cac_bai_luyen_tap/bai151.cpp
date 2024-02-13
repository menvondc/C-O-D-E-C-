#include <stdio.h>
#include <math.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}  

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
int check(int n){
    if(n <= 1){
        return 0; // Trả về 0 nếu số nhỏ hơn hoặc bằng 1
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return 0; // Trả về 0 nếu số chia hết cho một số khác 1 và chính nó
        }
    }
    return 1; // Trả về 1 nếu số là số nguyên tố
}

// Hàm tìm số nguyên tố lớn nhất trong mảng
void find(int arr[], int n){
    int value = 0;
    for(int i=0; i<n; i++){
        if(check(arr[i])){ // Nếu phần tử là số nguyên tố
            value = arr[i]; // Gán value bằng số nguyên tố đó
            for(int j=i+1; j<n; j++){
                if(check(arr[j])){ // Nếu có số nguyên tố nào lớn hơn, gán lại value
                    value = arr[j];
                }
            }
        }
    }
    if(value != 0){
        printf("So nguyen to lon nhat la: %d\n", value);
    }
    else{
        printf("-1"); // Nếu không có số nguyên tố nào trong mảng, in ra -1
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số nguyên tố lớn nhất trong mảng
    return 0;
}
