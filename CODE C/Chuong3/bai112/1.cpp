//hang=8
//cot=5
//* * * * * * * *
//* * * * * * * *
//* * * * * * * *
//* * * * * * * *
//* * * * * * * *

#include <stdio.h>

int main() {
    int n, cot, hang;
    printf("Nhap cot: ");
    scanf("%d", &cot);
    printf("Nhap hang: ");
    scanf("%d", &hang);
    for(int i=1; i<=cot; i++){
    	for(int j=1; j<=hang; j++){
    		printf("* ");
		}
		printf("\n");
	}
}