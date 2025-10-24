#include <stdio.h>

int main() {
 	
 	float  toan;
 	printf("Nhap diem toan: ");
 	scanf("%f", &toan);
 	
 	float van;
 	printf("Nhap diem van: ");
 	scanf("%f", &van);
 	
 	float anh;
 	printf("Nhap diem anh: ");
 	scanf("%f", &anh);
 	
 	float tong = toan + van + anh;
 	printf("Tong diem la: %.2f\n", tong);
 	
	 float trungbinh = (toan + van + anh) / 3;
	 printf("Diem trung binh la: %.2f", trungbinh);
 	
 	return 0;
}
