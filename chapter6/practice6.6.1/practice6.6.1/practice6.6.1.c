/*
練習問題6.6.1
ポインタへのポインタの練習
整数に値を代入するプログラム
整数変数、ポインタ、ポインタへのポインタの各アドレスを表示する
*/

#include<stdio.h>

int main(void) {
	int number      = 0;
	int* p_number   = 0;
	int** pp_number = 0;

	p_number  = &number;
	pp_number = &p_number;

	**pp_number = 100;

	printf("numberの値：%d  ポインタのアドレス：%p  ポインタへのポインタのアドレス：%p",number, p_number, pp_number);

	return 0;
}