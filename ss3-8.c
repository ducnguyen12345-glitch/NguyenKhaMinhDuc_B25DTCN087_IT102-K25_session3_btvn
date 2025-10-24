#include <stdio.h>

int main(){
	int number;
	int nghin, tram, chuc, don_vi;
	
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
	
	nghin = number/1000;
	tram = (number/100)%10;
	chuc = (number/10)%10;
	don_vi = (number%10);
	
	printf("So nghich dao cua so vua nhap la: %d%d%d%d", don_vi, chuc, tram, nghin);


	return 0;
}

