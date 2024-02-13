#include <stdio.h> 	
#include <stdbool.h>
#include <math.h>

// Hàm nhập mảng
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}  

// Hàm kiểm tra xem một số có phải là số hoàn thiện hay không
bool check(int n){
    if(n <= 1){
        return false; // Trả về false nếu số nhỏ hơn hoặc bằng 1
    }
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) {
            sum += i;
            if(i != n / i){
                sum += n / i;
            }
        }
    }
    return (sum == n);
}

// Hàm tìm số hoàn thiện nhỏ nhất trong mảng
void find(int arr[], int n){
    int min = 0;
    for(int i = 0; i < n; i++){
        if(check(arr[i])) {
            min = arr[i];
            for(int j = i + 1; j < n; j++){
                if(check(arr[j])){
                    if(min > arr[j]){
                        min = arr[j]; // Cập nhật giá trị min nếu tìm thấy số hoàn thiện nhỏ hơn
                    }
                }
            }
            break; // Dừng vòng lặp khi đã tìm thấy số hoàn thiện đầu tiên
        }
    }
    if(min != 0){
        printf("So hoan thien nho nhat la: %d\n", min);
    }
    else{
        printf("-1"); // Nếu không tìm thấy số hoàn thiện nào, in ra -1
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n); // Gọi hàm để nhập mảng
    find(arr, n); // Gọi hàm để tìm số hoàn thiện nhỏ nhất trong mảng
    return 0;
}
