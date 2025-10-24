#include <stdio.h>

int main(){
	float day, chieucao;
	printf("Nhap do dai canh day: ");
	scanf("%f", &day);
	
	printf("Nhap chieu cao: ");
	scanf("%f", &chieucao);
	
	
	float dien_tich = (day * chieucao) / 2;
	printf("Dien tich tam giac la: %.2f\n", dien_tich);

}

