#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	printf("Nhap canh a: ");
	scanf("%d", &a);
	printf("Nhap canh b: ");
	scanf("%d", &b);
	printf("Nhap canh c: ");
	scanf("%d", &c);
	
	// Kiểm tra xem ba cạnh có tạo thành tam giác không
	if(a+b<c || a+c<b || b+c<a){
		printf("Khong phai tam giac!");
	}
	else{
		// Kiểm tra xem tam giác là tam giác gì
		if((a==b) && (a==c) && (b==c)){
			printf("\nTam giac deu!");
		}
		else if(((pow(a,2)+pow(b,2)))==pow(c,2) || ((pow(a,2)+pow(c,2)))==pow(b,2) || ((pow(b,2)+pow(c,2)))==pow(a,2)){
			printf("\nTam giac vuong!");
		}
		else if((a==b) || (a==c) || (b==c)){
			printf("\nTam giac can!");
		}
		else{
			printf("Tam giac thuong!");
		}
	}
	return 0;
}
