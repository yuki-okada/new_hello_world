/*ポインタを用いたメモリアドレスの確認*/
#include<stdio.h>

int main(void) {
	char character = 0;
	char* cp = NULL;
	int integer = 0;
	int* ip = NULL;
	float number = 0.0;
	float* fp = NULL;
	double number2 = 0.00;
	double* dp = NULL;

	cp = &character;
	ip = &integer;
	fp = &number;
	dp = &number2;

	printf("%p %p %p %p\n", cp, ip, fp, dp);

	cp++;
	ip++;
	fp++;
	dp++;

	printf("%p %p %p %p\n", cp, ip, fp, dp);

	return 0;
}