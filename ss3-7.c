#include <stdio.h>

int main(){
	int number;
	int a, b, c, d;
	int sum;
	
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &number);
	
	a = number/1000;
	b = (number/100)%10;
	c = (number/10)%10;
	d = number%10;
	sum = a+b+c+d;
	
	printf("Tong cac chu so: %d", sum);


	return 0;
}

