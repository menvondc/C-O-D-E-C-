#include <stdio.h>
#include <stdbool.h>

#define Max 100

void input(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   

void find(int arr[], int n) {
    bool check = false;
    for(int i = 0; i < n; i++) {
        int value = -arr[i]; // Tìm giá trị đối của phần tử hiện tại
        for(int j = i + 1; j < n; j++) { // Duyệt qua các phần tử còn lại trong mảng
            if(arr[j] == value) { // Nếu tìm thấy giá trị phù hợp
                printf("\nCac gia tri can tim la: %d : vitri: %d\n", arr[i], i);
                check = true;
                break;
            }
        }
    }
    if(!check) {
        printf("No value");
    }
}

int main() {
    int arr[Max], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n);
    return 0;
}
