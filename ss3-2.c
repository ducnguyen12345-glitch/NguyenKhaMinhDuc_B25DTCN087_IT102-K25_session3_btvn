#include <stdio.h>

int main() {
	int cel;
	printf("Nhap nhiet do Celsius: ");
	scanf("%d", &cel);
	
	int fah = (cel * (9 / 5) ) + 32;
	printf("Nhiet do Fahrenheit: %d", fah);
	
	return 0;
}
