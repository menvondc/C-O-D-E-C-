#include <stdio.h>

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}   
void find(int arr[], int n){
    int vitri;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            printf("Cac gia tri am la: %d\n", arr[i]);
            printf("Vi tri cac gia tri am la: %d\n", i);
        }
    }
}
int main(){
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    input(arr, n);
    find(arr, n);			
}