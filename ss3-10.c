#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	float S;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(pow(a,3) + pow(b,2)));
	printf("S = %.2f", S);
	return 0;
}

