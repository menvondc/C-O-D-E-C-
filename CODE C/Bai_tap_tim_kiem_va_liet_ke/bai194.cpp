	#include <stdio.h>

// Hàm để nhập mảng
void input(int arr[], int n){
    // Duyệt qua từng phần tử trong mảng để nhập giá trị từ người dùng
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

// Hàm để sắp xếp mảng theo thứ tự giảm dần
void sort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j]; // Hoán đổi giá trị của hai phần tử
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

// Hàm để in ra mảng đã sắp xếp
void output(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]); // In ra từng phần tử của mảng
    }
}

// Hàm để tìm và in ra các cặp giá trị gần nhau trong mảng
void find(int arr[], int n){
    for(int i=0; i<n-1; i++){
        printf("\nCac cap gia tri gan nhau la: %d vs %d\n", arr[i], arr[i+1]); // In ra cặp giá trị gần nhau
    }
}

int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    sort(arr, n); // Sắp xếp mảng theo thứ tự giảm dần
    output(arr, n); // In ra mảng đã sắp xếp
    find(arr, n); // Tìm và in ra các cặp giá trị gần nhau trong mảng
}
