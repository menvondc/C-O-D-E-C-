#include <stdio.h>
#include <math.h>

int main(){
    int n, count=0; // Khai báo biến n để lưu giá trị nhập từ người dùng và biến count để đếm số lượng ước của n
    printf("Nhap n: ");
    scanf("%d", &n); // Nhập giá trị của n từ người dùng

    if(n<2){ // Nếu n nhỏ hơn 2, n không phải là số nguyên tố
        count++;
    }
    else{
        for(int i=2; i<=sqrt(n); i++){ // Duyệt qua các số từ 2 đến căn bậc hai của n
            if(n%i==0){ // Nếu n chia hết cho i, tức là i là ước của n
                count++; // Tăng biến đếm lên 1
                break; // Thoát khỏi vòng lặp vì đã tìm thấy ít nhất một ước của n
            }
        }
    }

    if(count==0){ // Nếu biến đếm vẫn là 0, tức là n không có ước nào ngoài 1 và chính nó
        printf("La so nguyen to!"); // In ra thông báo là n là số nguyên tố
    }
    else{
        printf("Khong la so nguyen to!"); // Ngược lại, in ra thông báo là n không phải là số nguyên tố
    }

    return 0; // Trả về 0 để thông báo rằng chương trình đã thực hiện thành công
}
