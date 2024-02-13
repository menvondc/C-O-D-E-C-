#include <stdbool.h>   // Thêm thư viện bool và các giá trị true, false
#include <math.h>       // Thêm thư viện các hàm toán học
#include <stdio.h>      // Thêm thư viện các hàm nhập xuất

// Hàm nhập mảng từ bàn phím
void input(int arr[], int n){
    for(int i=0; i<n; i++){           // Vòng lặp để nhập từng phần tử của mảng
        printf("arr[%d] = ", i);      // Hiển thị thông báo cho người dùng để nhập
        scanf("%d", &arr[i]);         // Nhập giá trị từ bàn phím và lưu vào mảng
    }
}

// Hàm tìm giá trị nhỏ nhất chia hết cho 2 hoặc giá trị lớn nhất không chia hết cho 2
void TimMin(int arr[], int n){
    int min = 1e9, max = -1e9;        // Khởi tạo min và max với giá trị tối đa và tối thiểu có thể
    for(int i=0; i<n; i++){           // Vòng lặp để duyệt qua từng phần tử của mảng
        if(arr[i] % 2 == 0){          // Nếu phần tử chia hết cho 2
            if(arr[i] < min){         // Kiểm tra xem nó có nhỏ hơn giá trị nhỏ nhất hiện tại không
                min = arr[i];         // Nếu có, cập nhật giá trị nhỏ nhất
            }
        }
        else if(arr[i] % 2 != 0){     // Nếu phần tử không chia hết cho 2
            if(arr[i] > max){         // Kiểm tra xem nó có lớn hơn giá trị lớn nhất hiện tại không
                max = arr[i];         // Nếu có, cập nhật giá trị lớn nhất
            }
        }
    }
    if(min > max){                    // Nếu giá trị nhỏ nhất chia hết cho 2 lớn hơn giá trị lớn nhất không chia hết cho 2
        printf("Gia tri can tim: %d", min);  // In ra màn hình giá trị nhỏ nhất thỏa mãn yêu cầu
    }
    else{
        printf("No value");          // Ngược lại, không có giá trị thỏa mãn yêu cầu
    }
}

int main(){                           // Hàm main, điểm bắt đầu của chương trình
    int n;
    scanf("%d", &n);                  // Nhập số lượng phần tử từ bàn phím
    int arr[n];                       // Khai báo mảng với số phần tử là n
    input(arr, n);                    // Gọi hàm để nhập các phần tử của mảng từ bàn phím
    TimMin(arr, n);                   // Gọi hàm để tìm và in ra giá trị nhỏ nhất thỏa mãn yêu cầu
}
