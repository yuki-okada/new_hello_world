/*
purgeという関数のプロトタイプを作成
引数をとらず、double型へのポインタを返す。
*/

#include<stdio.h>

double* purge(void);	/*関数プロトタイプ*/

int main(void) {
	double* p_number = NULL;

	p_number = purge();
	printf("%lf", *p_number);

	return 0;
}

double* purge(void) {
	double count = 0.0;

	return &count;
}