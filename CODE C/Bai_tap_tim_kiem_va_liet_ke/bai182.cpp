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
        if(arr[i] % 2 == 0) { // Kiểm tra xem arr[i] có phải là số chẵn không
            int value = -arr[i]; // Tìm giá trị đối của arr[i]
            for(int j = i + 1; j < n; j++) { // Duyệt qua các phần tử sau arr[i]
                if(arr[j] % 2 == 0 && arr[j] == value) { // Nếu arr[j] là số chẵn và bằng giá trị đối của arr[i]
                    printf("\nCac gia tri can tim la: %d : vitri: %d\n", arr[i], i);
                    printf("va %d : vitri: %d\n", arr[j], j);
                    check = true; // Đánh dấu là đã tìm thấy ít nhất một cặp số thỏa mãn
                    break;
                }
            }
        }
    }
    if(!check) {
        printf("No value");
    }
}

int main() {
    int arr[Max], n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n);
    return 0;
}
