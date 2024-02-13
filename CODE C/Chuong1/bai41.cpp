#include <stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float x=1;
    for(int i=0; i<=n; i++){
        x=1.0/(1.0+x);
    }
    printf("sum = %.8f", x);
}