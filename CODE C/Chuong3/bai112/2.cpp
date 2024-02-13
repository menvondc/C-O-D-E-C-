//hang=6
//cot=4
//* * * * * * 		* * * * * *
//* * * * * * 		*         *
//* * * * * * 		*		  *
//* * * * * * 		* * * * * * 




#include <stdio.h>

int main() {
    int n, cot, hang;
    printf("Nhap cot: ");
    scanf("%d", &cot);
    printf("Nhap hang: ");
    scanf("%d", &hang);
    for(int i=1; i<=cot; i++){
    	for(int j=1; j<=hang; j++){
    		if(i==1 || i==cot || j==1 || j==hang){
    			printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
