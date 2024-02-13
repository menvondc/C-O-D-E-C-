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
bool check(int n){              // Hàm để kiểm tra một điều kiện trên một số nguyên và trả về true nếu điều kiện đúng, ngược lại trả về false
    int num=n/10;               // Chia số cho 10
    if(num%2!=0){               // Kiểm tra xem kết quả có là số lẻ không
        return true;            // Trả về true nếu là số lẻ
    }
    return false;               // Trả về false nếu không phải số lẻ
}   

int find(int arr[], int n){     // Hàm để tính tổng các phần tử thỏa mãn một điều kiện và trả về tổng đó
    int sum=0;                  // Khởi tạo tổng bằng 0
    for(int i=0; i<n; i++){     // Vòng lặp qua từng phần tử của mảng
        if(check(arr[i])){      // Kiểm tra xem phần tử có thỏa mãn điều kiện không
            sum+=arr[i];        // Nếu có, thêm giá trị đó vào tổng
        }
    }
    return sum;                 // Trả về tổng cuối cùng
}


int main(){
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
	printf("Tong la: %d", find(arr, n));

}